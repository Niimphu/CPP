#include "PMergeMe.hpp"

int	main(int ac, char** av) {
	if (ac < 2) {
		std::cerr << "Error: not enough arguments" << std::endl;
		return 1;
	}
	PMergeMe	sorter;
	sorter.sort(ac - 1, av);
	return 0;
}
