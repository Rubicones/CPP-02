//
// Created by Deadshot Gizzard on 7/11/22.
//
#include "Fixed.h"
#include <cmath>

Fixed::Fixed(){
	_value = 0;
	std::cout << "Default constructor called " << std::endl;
}

Fixed::Fixed(const int num){
	_value = num << _fracBits;
	std::cout << "Integer constructor called " << std::endl;

}

Fixed::Fixed(const float num){
	_value = roundf(num * (1 << _fracBits));
	std::cout << "Float constructor called " << std::endl;
}


Fixed::Fixed(const Fixed &a){
	(void)a;
	std::cout << "Copy constructor called " << std::endl;
}

float Fixed::toFloat() const {
	return ((float)_value / (1 << _fracBits));
}

int Fixed::toInt() const {
	return (_value >> 8);
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

Fixed & Fixed::operator<<(const Fixed &a){
	(void)a;
	std::cout << "Assignment operator called " << std::endl;
	return (*this);
}