#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string>

class Fixed {
public:
	Fixed();
	Fixed( const Fixed& );
	~Fixed();

	Fixed &operator=( const Fixed& );

	void	setRawBits( int const );

	int		getRawBits( void ) const;


private:
	int					_rawBits;
	static const int	_fractionalBits;

};

#endif
