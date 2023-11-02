#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include "iostream"
# include "string"

class ClapTrap {
public:
	ClapTrap( const std::string& );
	ClapTrap( const std::string&, unsigned int, unsigned int, unsigned int );
	~ClapTrap();

	virtual void	attack( const std::string& );

	void	takeDamage( unsigned int );
	void	beRepaired( unsigned int );

	const std::string&	getName( void ) const;
	unsigned int		getHitPoints( void );
	unsigned int		getEnergyPoints( void );
	unsigned int		getAttackDamage( void );

	void	setHitPoints( unsigned int );
	void	setEnergyPoints( unsigned int );
	void	setAttackDamage( unsigned int );

private:
	const std::string	_name;
	unsigned int		_hitPoints;
	unsigned int		_energyPoints;
	unsigned int		_attackDamage;

};

#endif
