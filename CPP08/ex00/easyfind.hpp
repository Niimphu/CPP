#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>
# include <stdexcept>

template<typename T>
typename T::iterator	easyfind(T& container, int value) {
	typename T::iterator	index = std::find(container.begin(), container.end(), value);
	if (index == container.end())
		throw std::runtime_error("Value not found");
	return index;
}

#endif
