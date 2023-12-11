#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	for ( int i = 0; i < 4; ++i ) {
		_library[i] = NULL;
	}
}

MateriaSource::MateriaSource( const MateriaSource& original ) {
	for ( int i = 0; i < 4; ++i ) {
		_library[i] = original._library[i];
	}
}

MateriaSource::~MateriaSource() {
	for ( int i = 0; i < 4; ++i ) {
		delete _library[i];
	}
}

MateriaSource&	MateriaSource::operator=( const MateriaSource& other ) {
	if ( this != &other ) {
		for (int i = 0; i < 4; ++i) {
			_library[i] = other._library[i];
		}
	}
	return *this;
}


void	MateriaSource::learnMateria( AMateria* m ) {
	for ( int i = 0; i < 4; ++i ) {
		if ( _library[i] == NULL ) {
			_library[i] = m->clone();
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria( const std::string& type ) {
	for ( int i = 0; i < 4; ++i ) {
		if ( _library[i]->getType() == type ) {
			return _library[i]->clone();
		}
	}
	return 0;
}
