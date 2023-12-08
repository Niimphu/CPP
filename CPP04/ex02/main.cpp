#include "Animal.hpp"
#include "Cat.hpp"

int	main( void ) {
//	const Animal*	test = new Animal();
	const Animal*	cat = new Cat();

	delete cat;
	return 0;
}
