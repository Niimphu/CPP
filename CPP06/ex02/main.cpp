#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
#include <ctime>
#include <cstdlib>

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

	identify(randomInstance);
	identify(*randomInstance);

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

void	identify(Base* p) {
	if (A* a = dynamic_cast<A*>(p)) {
		std::cout << "Class identified as Class A" << std::endl;
	} else if (B* b = dynamic_cast<B*>(p)) {
		std::cout << "Class identified as Class B" << std::endl;
	} else if (C* c = dynamic_cast<C*>(p)) {
		std::cout << "Class identified as Class C" << std::endl;
	} else {
		std::cerr << "Unidentified class" << std::endl;
	}
}

void identify(Base& p) {
	if (dynamic_cast<A*>(&p)) {
		std::cout << "Class identified as class A" << std::endl;
	} else if (dynamic_cast<B*>(&p)) {
		std::cout << "Class identified as class B" << std::endl;
	} else if (dynamic_cast<C*>(&p)) {
		std::cout << "Class identified as class C" << std::endl;
	} else {
		std::cerr << "Unidentified class" << std::endl;
	}
}

//void	identify(Base& p) {
//	try {
//		identify(&p);
//	} catch (const std::bad_cast&) {
//		std::cout << "Unidentified class" << std::endl;
//	}
//}
