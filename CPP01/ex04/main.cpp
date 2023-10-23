#include <iostream>
#include <string>
#include <fstream>

std::string	replace( std::string line, const std::string& s1, const std::string& s2 );

int	main( int argc, char** argv ) {
	if (argc != 4) {
		std::cerr << "Usage: ./loser <filename> <string1> <string2>"
				  << std::endl;
		return 1;
	}

	const std::string	inputFilename = argv[1];
	std::ifstream		inputFile(inputFilename.c_str());
	if (!inputFile.is_open()) {
		std::cerr << "Unable to open file " << inputFilename << std::endl;
		return (1);
	}

	const std::string	outputFilename = inputFilename + ".replace";
	std::ofstream		outputFile(outputFilename.c_str());
	if (!inputFile.is_open()) {
		std::cerr << "Unable to create file " << outputFilename << std::endl;
		inputFile.close();
		return (1);
	}

	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	std::string	line;
	while (std::getline(inputFile, line)) {
		outputFile << replace(line, s1, s2) << std::endl;
	}

	inputFile.close();
	outputFile.close();
	return 0;
}

std::string	replace( std::string line, const std::string& s1, const std::string& s2 ) {
	size_t		pos = 0;
	while ((pos = line.find(s1, pos)) != std::string::npos) {
		line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
		pos += s2.length();
	}
	return line;
}
