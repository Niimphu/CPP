#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

template<class T>
class	Array {
public:
	Array(void) : _elements(0), _size(0) {}
	Array(unsigned int size) : _elements(new T[size]), _size(size) {
		for (size_t i = 0; i < _size; i++) {
			_elements[i] = T();
		}
	}
	Array(const Array& original): _elements(new T[original._size]), _size(original._size) {
		for (size_t i = 0; i < _size; i++) {
			_elements[i] = T(original._elements[i]);
		}
	}
	~Array(void) {
		delete[] _elements;
	}

	Array&	operator=(const Array& other) {
		if (this != &other) {
			delete[] _elements;
			_size = other._size;
			_elements = new T[_size];
			for (size_t i = 0; i < _size; i++) {
				_elements[i] = T(other._elements[i]);
			}
		}
		return *this;
	}
	T&		operator[](unsigned int i) {
		if (i >= _size) {
			throw std::out_of_range("Index out of bounds");
		}
		else {
			return (_elements[i]);
		}
	}

	unsigned int	size() const {
		return (_size);
	}
	void	print() const {
		for (size_t i = 0; i < _size; i++) {
			std::cout << (i ? ", " : "") << _elements[i];
		}
		std::cout << std::endl;
	}

private:
	T*				_elements;
	unsigned int	_size;
};

#endif
