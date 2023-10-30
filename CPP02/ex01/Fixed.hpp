#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string>

class Fixed {
public:
	Fixed();
	Fixed( const Fixed& );
	Fixed( const int );
	Fixed( const float );
	~Fixed();

	Fixed	&operator=( const Fixed& );

	bool	operator>( const Fixed& );
	bool	operator<( const Fixed& );
	bool	operator>=( const Fixed& );
	bool	operator<=( const Fixed& );
	bool	operator==( const Fixed& );
	bool	operator!=( const Fixed& );

	Fixed	operator+( const Fixed& );
	Fixed	operator-( const Fixed& );
	Fixed	operator*( const Fixed& );
	Fixed	operator/( const Fixed& );

	Fixed&	operator++( void );
	Fixed	operator++( int );
	Fixed&	operator--( void );
	Fixed	operator--( int );

	friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

	float	toFloat( void ) const;
	int		toInt( void ) const;

	void	setRawBits( int const );

	int		getRawBits( void ) const;


private:
	int					_rawBits;
	static const int	_fractionalBits;

};

#endif
