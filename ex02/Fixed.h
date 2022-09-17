//
// Created by Deadshot Gizzard on 7/11/22.
//

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed{
public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed &a);
	Fixed & operator = (const Fixed &a);
	Fixed operator+(const Fixed &num1) const;
	Fixed operator++(int);
	Fixed & operator++(void);
	Fixed operator--(int);
	Fixed & operator--(void);
	Fixed operator-(const Fixed &num1) const;
	Fixed operator*(const Fixed &num1) const;
	Fixed operator/(const Fixed &num1) const;
	bool  operator<(const Fixed &a) const;
	bool  operator>(const Fixed &a) const;
	bool  operator>=(const Fixed &a) const;
	bool  operator<=(const Fixed &a) const;
	bool  operator==(const Fixed &a) const;
	bool  operator!=(const Fixed &a) const;
	static Fixed & min(Fixed &a, Fixed &b);
	static const Fixed & min(Fixed const &a, Fixed const &b);
	static Fixed & max(Fixed &a, Fixed &b);
	static const Fixed & max(Fixed const &a, Fixed const &b);

	int  getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
	~Fixed();
private:
	int _value;
	static const int _fracBits = 8;
};

std::ostream & operator<<(std::ostream &stream, Fixed const & number);


#endif //FIXED_H
