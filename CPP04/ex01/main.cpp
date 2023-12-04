#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal *cat = new Cat();
	const Animal *cat2 = new Cat();
	std::cout << std::endl;



	delete cat;
	delete cat2;

	return 0;
}
