#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal *def = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	std::cout << std::endl;

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << def->getType() << " " << std::endl;
	std::cout << std::endl;

	dog->makeSound();
	cat->makeSound();
	def->makeSound();
	std::cout << std::endl;

	delete dog;
	delete cat;
	delete def;
	std::cout << std::endl;

	const WrongAnimal	*wrongCat = new WrongCat();
	std::cout << std::endl;

	std::cout << wrongCat->getType() << std::endl;
	std::cout << std::endl;

	delete wrongCat;

	return 0;
}
