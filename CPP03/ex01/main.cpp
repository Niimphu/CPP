#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void ) {
	ScavTrap	serena( "Serena" );
	std::cout << serena.getName() << "'s stats" << std::endl;
	std::cout << "Hitpoints: " << serena.getHitPoints() << std::endl;
	std::cout << "Energy points: " << serena.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << serena.getAttackDamage() << std::endl;
	std::cout << std::endl;

	ClapTrap	balthazar( "Balthazar" );
	balthazar.setAttackDamage( 42 );
	std::cout << balthazar.getName() << "'s stats" << std::endl;
	std::cout << "Hitpoints: " << balthazar.getHitPoints() << std::endl;
	std::cout << "Energy points: " << balthazar.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << balthazar.getAttackDamage() << std::endl;
	std::cout << std::endl;

	serena.attack( balthazar.getName() );
	balthazar.takeDamage( serena.getAttackDamage() );
	std::cout << std::endl;

	balthazar.attack( serena.getName() );
	balthazar.beRepaired( 2 );
	balthazar.attack( serena.getName() );
	serena.takeDamage( balthazar.getAttackDamage() );
	serena.guardGate();
	std::cout << std::endl;

	return 0;
}
