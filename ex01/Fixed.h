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
	int  getRawBits(void);
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
	~Fixed();
private:
	uint64_t _value;
	static const int _fracBits = 8;
};


#endif //FIXED_H
