#ifndef TYPE_HPP
# define TYPE_HPP

enum Type {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO_FLOAT,
	PSEUDO_DOUBLE,

};

std::string	P_FLOATS[] = { "-inff", "+inff", "nanf" };
std::string	P_DOUBLES[] = { "-inf", "+inf", "nan" };

#endif
