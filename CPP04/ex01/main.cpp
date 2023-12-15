#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main( void ) {
	Animal	*squad[] = {
			new Dog(), new Dog(), new Dog(), new Dog(), new Dog(),
			new Cat(),new Cat(),new Cat(),new Cat(),new Cat()
	};
	std::cout << std::endl;

	for ( int i = 0; i < 5; i++ ) {
		delete squad[ i ];
	}
	std::cout << std::endl;

	for ( int i = 5; i < 10; i++ ) {
		delete squad[ i ];
	}
	std::cout << std::endl;

	return 0;
}

//int	main( void ) {
//	Cat*	cheeto = new Cat();
//	cheeto->getBrain()->setIdea( "Meow" );
//	std::cout << cheeto->getBrain()->getIdea( 0 ) << std::endl;
//	std::cout << std::endl;
//
//	Cat*	paulo = new Cat( *cheeto );
//	paulo->getBrain()->setIdea( "Purr" );
//	std::cout << paulo->getBrain()->getIdea( 0 ) << std::endl;
//	std::cout << paulo->getBrain()->getIdea( 1 ) << std::endl;
//	std::cout << std::endl;
//
//	delete cheeto;
//	std::cout << std::endl;
//
//	std::cout << paulo->getBrain()->getIdea( 0 ) << std::endl;
//	std::cout << paulo->getBrain()->getIdea( 1 ) << std::endl;
//	std::cout << std::endl;
//
//	delete paulo;
//
//	return 0;
//}
