#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int	main( void ) {
	AMateria* iceStick = new Ice();
	AMateria* medicine = new Cure();
	std::cout << std::endl;

	ICharacter* bea = new Character("Bea");
	ICharacter* fred = new Character("Fred");
	std::cout << std::endl;

	bea->equip(iceStick);
	bea->equip(medicine);
	std::cout << std::endl;

	bea->use(0, *fred);
	bea->use(1, *fred);
	bea->unequip(1);
	bea->unequip(2);
	std::cout << std::endl;

	delete fred;
	delete bea;
	delete medicine;
}
