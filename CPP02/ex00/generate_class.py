import sys

def generate_cpp_from_hpp(hpp_file):
	# Parse the class name from the input .hpp file
	class_name = None
	with open(hpp_file, 'r') as hpp:
		for line in hpp:
			if line.strip().startswith("class "):
				class_name = line.split()[1].strip()
				break

	if class_name is None:
		print("Error: Unable to determine the class name from the input file.")
		return

	cpp_file = class_name + ".cpp"

	# Create the .cpp file with the class definitions
	with open(cpp_file, 'w') as cpp:
		cpp.write("#include \"" + hpp_file + "\"\n\n")
		cpp.write(class_name + "::" + class_name + "() {}\n")
		cpp.write(class_name + "::~" + class_name + "() {}\n\n")

		in_method = False

		with open(hpp_file, 'r') as hpp:
			for line in hpp:
				line = line.strip()
				if line.startswith("private:") or line.startswith("protected:"):
					in_method = False
				if line.startswith("public:"):
					in_method = True
				if in_method and (line.startswith("void") or line.startswith("int")):
					# Extract method name and argument list
					tokens = line.split("(")
					method = tokens[0].split()[-1]
					arguments = tokens[1].split(")")[0].split(",")
					arguments = [arg.strip() for arg in arguments if arg.strip()]
					# Generate method definition
					cpp.write("void " + class_name + "::" + method + "(")
					if arguments:
						cpp.write(", ".join(arguments))
					cpp.write(") {\n")
					if line.startswith("int"):
						cpp.write("    // Implementation for " + method + "\n")
						cpp.write("}\n\n")

	print("Generated " + cpp_file)

if __name__ == "__main__":
	if len(sys.argv) != 2:
		print("Usage: python3 generate_cpp_from_hpp.py Class.hpp")
	else:
		hpp_file = sys.argv[1]
		generate_cpp_from_hpp(hpp_file)
