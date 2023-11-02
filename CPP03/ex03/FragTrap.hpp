#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap {
public:
	FragTrap( const std::string& );
	~FragTrap();

	void	attack( const std::string& );
	void	highFivesGuys( void );

};

#endif
