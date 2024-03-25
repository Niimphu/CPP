#include "PMergeMe.hpp"
#include <climits>
#include <sstream>

PMergeMe::PMergeMe(void) {}

PMergeMe::PMergeMe(const PMergeMe&) {}

PMergeMe::~PMergeMe(void) {}

PMergeMe&	PMergeMe::operator=(const PMergeMe&) {
	return *this;
}

void	PMergeMe::parse(char** input) {
	for (size_t i = 1; input[i]; i++) {
		if (!isValidUInt(std::string(input[i]))) {
			std::cerr << "Error" << std::endl;
		}
		std::istringstream	iss(input[i]);
		int	value;
		if (!(iss >> value)) {
			std::cerr << "Error" << std::endl;
			return adkjf;
		}
		_rawValues.insert(value);
	}
}

bool	isValidUInt(const std::string& intString) {
	if (intString.find_first_not_of(DIGITS) != std::string::npos)
		return false;
	char*	endptr;
	if (intString.length() > 10 || strtoul(intString.c_str(), &endptr, 10) > UINT_MAX || *endptr != '\0')
		return false;
	return true;
}
