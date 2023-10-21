#include "Zombie.hpp"

int	main( void ) {
	int	N = 3;
	Zombie* horde = zombieHorde(N, "Timothy");

	for (int i = 0; i < N; ++i) {
		horde[i].announce();
	}
	std::cout << std::endl;

	delete horde;
}

void	Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}