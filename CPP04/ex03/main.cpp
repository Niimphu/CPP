#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	return 0;
}

//int	main( void ) {
//	AMateria* iceStick = new Ice();
//	AMateria* medicine = new Cure();
//	std::cout << std::endl;
//
//	ICharacter* bea = new Character("Bea");
//	ICharacter* fred = new Character("Fred");
//	std::cout << std::endl;
//
//	bea->equip(iceStick);
//	bea->equip(medicine);
//	std::cout << std::endl;
//
//	bea->use(0, *fred);
//	bea->use(1, *fred);
//	bea->unequip(1);
//	bea->unequip(2);
//	std::cout << std::endl;
//
//	delete fred;
//	delete bea;
//	delete medicine;
//}
