#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
public:
	FragTrap();
	FragTrap( const std::string& );
	~FragTrap();

	void	highFivesGuys( void );

};

#endif
