#include "Serializer.hpp"

Serializer::Serializer( void ) {}

Serializer::Serializer( const Serializer& ) {}

Serializer::~Serializer( void ) {}

Serializer&	Serializer::operator=( const Serializer& ) {
	return *this;
}

unsigned long	Serializer::serialize(Data* ptr) {
	return reinterpret_cast<unsigned long>(ptr);
}

Data*			Serializer::deserialize(unsigned long raw) {
	return reinterpret_cast<Data*>(raw);
}
