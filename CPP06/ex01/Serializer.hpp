#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>

# include "Data.hpp"

class	Serializer {
public:
	static unsigned long	serialize(Data* ptr);
	static Data*			deserialize(unsigned long raw);


private:
	Serializer( void );
	Serializer( const Serializer& );
	~Serializer( void );

	Serializer&	operator=( const Serializer& );

};

#endif
