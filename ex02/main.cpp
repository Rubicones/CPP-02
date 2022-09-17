#include <iostream>
#include "Fixed.h"
#include <ctime>

int main( void ) {
	Fixed a;
	Fixed b;

	Fixed const a1 = (Fixed(12.34f) + Fixed(56.78f));
	Fixed const b1 = (Fixed(12.34f) - Fixed(56.78f));

	a = Fixed(12.34f);
	b = Fixed(56.78f);
	std::cout << a << " dat is a" << std::endl;

	std::cout << (a++) << " dat is ++ post" << std::endl;

	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << Fixed::min(a1, b1) << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::max(a1, b1) << std::endl;
	return 0;
}