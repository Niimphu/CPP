#ifndef TYPE_HPP
# define TYPE_HPP

# include <string>

enum Type {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO_FLOAT,
	PSEUDO_DOUBLE,
	UNKNOWN
};

const std::string	P_FLOATS[] = { "-inff", "+inff", "nanf" };
const std::string	P_DOUBLES[] = { "-inf", "+inf", "nan" };

#endif
