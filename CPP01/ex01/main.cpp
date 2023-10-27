#include "Zombie.hpp"

int	main( void ) {
	int	N = 3;
	Zombie* horde = zombieHorde(N, "Timothy");
	for (int i = 0; i < N; ++i) {
		horde[i].announce();
	}

	int M = 8;
	Zombie* horde2 = zombieHorde(M, "Mary");
	for (int i = 0; i < M; ++i) {
		horde2[i].announce();
	}

	delete[] horde;
	delete[] horde2;

	return 0;
}

