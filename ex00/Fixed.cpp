//
// Created by Deadshot Gizzard on 7/11/22.
//
#include "Fixed.h"

Fixed::Fixed(){
	_value = 0;
	std::cout << "Default constructor called " << std::endl;
}
Fixed::Fixed(const Fixed &a){
	(void)a;
	std::cout << "Copy constructor called " << std::endl;
}

int Fixed::getRawBits() {
	std::cout << "getRawBits memeber function called " << std::endl;
	return _value;
}

void Fixed::setRawBits(const int raw) {
	_value = raw;
}
Fixed::~Fixed(){
	std::cout << "Destructor called " << std::endl;
}
Fixed & Fixed::operator=(const Fixed &a){
	(void)a;
	std::cout << "Assignment operator called " << std::endl;
	return (*this);
}