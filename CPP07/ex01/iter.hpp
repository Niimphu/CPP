#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>

template<typename T, typename F>
void	iter(T* array, size_t length, F function) {
	for (size_t i = 0; i < length; i++) {
		function(array[i]);
	}
}

//array printing function for testing
template<typename T>
void	printArray(T* array, size_t length) {
	for (size_t i = 0; i < length; i++) {
		std::cout << (i == 0 ? "" : ", ") << array[i];
	}
	std::cout << std::endl;
}

#endif
