#include "ClapTrap.hpp"

int	main( void ) {
	ClapTrap randall( "Randall" );
	ClapTrap bertha( "Bertha" );
	randall.setAttackDamage( 3 );
	std::cout << std::endl;

	randall.attack( bertha.getName() );
	bertha.takeDamage( randall.getAttackDamage() );
	std::cout << std::endl;

	bertha.beRepaired( 1 );
	std::cout << std::endl;

	bertha.attack( randall.getName() );
	randall.takeDamage( bertha.getAttackDamage() );
	std::cout << std::endl;

	randall.attack( bertha.getName() );
	bertha.takeDamage( randall.getAttackDamage() );
	std::cout << std::endl;

	randall.attack( bertha.getName() );
	bertha.takeDamage( randall.getAttackDamage() );
	std::cout << std::endl;

	randall.attack( bertha.getName() );
	bertha.takeDamage( randall.getAttackDamage() );
	std::cout << std::endl;

	bertha.attack( randall.getName() );
	std::cout << std::endl;
	return 0;
}
