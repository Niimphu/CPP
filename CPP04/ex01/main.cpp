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
}

//int	main( void ) {
//	std::srand(static_cast<unsigned int>(std::time(0)));
//
//	const Animal *a = new Cat();
//	a->newIdea();
//	a->newIdea();
//	a->thinkIdea( 0 );
//	a->thinkIdea( 1 );
//	std::cout << std::endl;
//
//	const Animal *b = new Cat(*a);
//	b->thinkIdea( 0 );
//	b->thinkIdea( 1 );
//	std::cout << std::endl;
//
//	a->newIdea();
//	a->newIdea();
//	a->thinkIdea( 2 );
//	a->thinkIdea( 3 );
//	std::cout << std::endl;
//
//	b->newIdea();
//	b->newIdea();
//	b->thinkIdea( 2 );
//	b->thinkIdea( 3 );
//	std::cout << std::endl;
//
//	delete a;
//	std::cout << std::endl;
//
//	b->thinkIdea( 0 );
//	delete b;
//	std::cout << std::endl;
//
//	return 0;
//}
