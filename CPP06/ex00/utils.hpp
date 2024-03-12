#ifndef UTILS_HPP
# define UTILS_HPP

# include <limits>
# include <cstdlib>
# include <cmath>
# include "Type.hpp"

t_set	convertChar(const std::string&);
t_set	convertNumber(const std::string&);
t_set	convertPseudoLiteral(const std::string&);

size_t	charCount(const std::string&, char);
bool	isInIntRange(double);

#endif
