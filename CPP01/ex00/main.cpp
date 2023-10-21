#include "Zombie.hpp"

int	main( void ) {
	Zombie* Fred = newZombie("Fred");
	Fred->announce();

	std::cout << std::endl;

	randomChump("Chad");

	std::cout << std::endl;

	delete Fred;
}

void	Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
