#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

Base*	generate(void);
void	identify(Base*);
void	identify(Base&);

int	main(void) {
	std::srand(static_cast<unsigned int>(std::time(0)));
	Base*	randomInstance;
	try {
		randomInstance = generate();
	}
	catch (const std::string e) {
		std::cerr << e << std::endl;
	}
	delete randomInstance;
}

Base*	generate(void) {
	Base*	instance;
    int	rng = std::rand() % 3 + 1;
	switch(rng) {
		case 1: {
			instance = new A();
			std::cout << "Class A was generated" << std::endl;
			break;
		}
		case 2: {
			instance = new B();
			std::cout << "Class B was generated" << std::endl;
			break;
		}
		case 3: {
			instance = new C();
			std::cout << "Class C was generated" << std::endl;
			break;
		}
		default: {
			throw std::string("Error generating class");
		}
	}
	return instance;
}

void	identify(Base*) {
}

void	identify(Base&) {

}
