import sys
import os


def capitalize_first_letter(string):
    return string[0].upper() + string[1:]


def create_hpp(class_name, directory, attributes):
    header_guard = class_name.upper() + "_HPP"
    header_path = os.path.join(directory, class_name + ".hpp")

    with open(header_path, 'w') as f:
        f.write("#ifndef {}\n".format(header_guard))
        f.write("# define {}\n\n".format(header_guard))
        f.write("# include <iostream>\n")
        f.write("# include <string>\n\n")
        f.write("class\t{}\n".format(class_name))
        f.write("{\npublic:\n")
        f.write("\t{}( void );\n".format(class_name))
        f.write("\t{}( const {}& );\n".format(class_name, class_name))
        f.write("\t~{}( void );\n\n".format(class_name))
        f.write("\t{}&\toperator=( const {}& );\n\n".format(class_name, class_name))

        for attr_type, attr_name in attributes:
            f.write("\tvoid\tset{}( const {}& );\n".format(capitalize_first_letter(attr_name), attr_type))
            f.write("\t{}\tget{}( void );\n\n".format(attr_type, capitalize_first_letter(attr_name)))

        f.write("\nprivate:\n")
        for attr_type, attr_name in attributes:
            f.write("\t{}\t{};\n".format(attr_type, "_" + attr_name))

        f.write("\n};\n\n#endif\n")


def create_cpp(class_name, directory, attributes):
    cpp_path = os.path.join(directory, class_name + ".cpp")
    with open(cpp_path, 'w') as f:
        f.write("#include \"{}.hpp\"\n\n".format(class_name))
        f.write("{}::{}( void ) {{}}\n\n".format(class_name, class_name))
        f.write("{}::{}( const {}& original ) {{}}\n\n".format(class_name, class_name, class_name))
        f.write("{}::~{}( void ) {{}}\n\n".format(class_name, class_name))
        f.write("{}&\t{}::operator=( const {}& other ) {{\n".format(class_name, class_name, class_name))
        f.write("\tif ( this != &other ) {}\n")
        f.write("\treturn *this;\n")
        f.write("}\n")

        for attr_type, attr_name in attributes:
            f.write("\nvoid\t\t{}::set{}( const {}& {} ) {{\n".format(class_name, capitalize_first_letter(attr_name),
                    attr_type, attr_name))
            f.write("\t_{} = {};\n".format(attr_name, attr_name))
            f.write("}\n\n")

            f.write("{}\t{}::get{}( void ) {{\n".format(attr_type,
                    class_name, capitalize_first_letter(attr_name)))
            f.write("\treturn _{};\n".format(attr_name))
            f.write("}\n")


def main():
    if len(sys.argv) < 3 or len(sys.argv) % 2 != 1:
        print("Usage: python generateClass.py ClassName Directory [Type1 Name1 Type2 Name2 ...]")
        return

    class_name = sys.argv[1]
    directory = sys.argv[2]

    if not os.path.exists(directory):
        os.makedirs(directory)

    attributes = []
    if len(sys.argv) > 3:
        for i in range(3, len(sys.argv), 2):
            attributes.append((sys.argv[i], sys.argv[i+1]))

    create_hpp(class_name, directory, attributes)
    create_cpp(class_name, directory, attributes)

    print("Class {} generated successfully in directory {}".format(class_name, directory))


if __name__ == "__main__":
    main()
