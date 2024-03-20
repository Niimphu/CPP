#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <cstddef>

template<typename T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack(void): std::stack<T>() {}
	MutantStack(const MutantStack &original): std::stack<T>(original) {}
	MutantStack &operator=(const MutantStack& other) {
		if (this != &other)
			std::stack<T>::operator=(other);
		return *this;
	}
    T&  operator[](size_t index) {
        iterator it = this->begin();
        std::advance(it, index);
        return *it;
    }
	~MutantStack(void) {}

	iterator begin(void) {
		return this->c.begin();
	}
	iterator end(void) {
		return this->c.end();
	}
};

#endif
