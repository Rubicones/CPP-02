#include <iostream>
#include "Fixed.h"
#include <cmath>

int main( void ) {
	float a = 12.34f;
	float b;

	b = roundf(a * (1 << 8));
	std::cout << 10.0f / (1 << 8) << std::endl;
	return 0;
}