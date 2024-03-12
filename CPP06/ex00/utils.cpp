#include "utils.hpp"

t_set	convertChar(const std::string& input) {
	t_set	set;

	set.c = static_cast<char>(input.c_str()[0]);
	set.i = static_cast<int>(set.c);
	set.f = static_cast<float>(set.c);
	set.d = static_cast<double>(set.c);
	set.type = CHAR;
	return set;
}

t_set	convertNumber(const std::string& input) {
	t_set	set;
	double	number = strtod(input.c_str(), NULL);

	set.c = static_cast<char>(number);
	set.i = static_cast<int>(number);
	set.f = static_cast<float>(number);
	set.d = static_cast<double>(number);
	set.type = NUMBER;
	return set;
}

t_set	convertPseudoLiteral(const std::string& input) {
	t_set	set;

	if (charCount(input, 'f') == 1) {
		if (!input.compare(P_DOUBLES[0]))
			set.d = std::numeric_limits<double>::infinity();
		if (!input.compare(P_FLOATS[1]))
			set.d = -std::numeric_limits<double>::infinity();
		if (!input.compare(P_FLOATS[2]))
			set.d = std::numeric_limits<double>::quiet_NaN();
		set.f = static_cast<float>(set.d);
		set.type = PSEUDO_DOUBLE;
	}
	else {
		if (!input.compare(P_FLOATS[0]))
			set.f = std::numeric_limits<float>::infinity();
		if (!input.compare(P_FLOATS[1]))
			set.f = -std::numeric_limits<float>::infinity();
		if (!input.compare(P_FLOATS[2]))
			set.f = std::numeric_limits<float>::quiet_NaN();
		set.d = static_cast<double>(set.f);
		set.type = PSEUDO_FLOAT;
	}
	return set;
}

size_t	charCount(const std::string& input, char c) {
	size_t	count = 0;

	for (size_t it = 0; it < input.length(); it++) {
		if (input[it] == c)
			count++;
	}
	return count;
}

bool	isInIntRange(double input) {
	int	intInput = static_cast<int>(input);
	return intInput <= std::numeric_limits<int>::max() && intInput >= std::numeric_limits<int>::min();
}

std::string	decimalEnding(t_set set, Type type) {
	std::string	ending;
	ending = type == FLOAT ? "f" : "";
	if (set.d == static_cast<int>(set.d) && set.d < 1000000)
		return ".0" + ending;
	return ending;
}
