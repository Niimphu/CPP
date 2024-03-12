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
	NUMBER,
	UNKNOWN
};

typedef struct	s_set {
	char	c;
	int		i;
	float	f;
	double	d;
	Type	type;
}				t_set;

const std::string	P_FLOATS[] = { "-inff", "+inff", "nanf" };
const std::string	P_DOUBLES[] = { "-inf", "+inf", "nan" };

#endif
