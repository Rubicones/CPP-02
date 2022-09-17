//
// Created by Deadshot Gizzard on 7/11/22.
//
#include "Fixed.h"
#include <cmath>

Fixed::Fixed(){
	_value = 0;
}

Fixed::Fixed(const int num){
	_value = num << _fracBits;
}

Fixed::Fixed(const float num){
	_value = roundf(num * (1 << _fracBits));
}


Fixed::Fixed(const Fixed &a){
	*this = a;
}

float Fixed::toFloat() const {
	return ((float)_value / (1 << _fracBits));
}

int Fixed::toInt() const {
	return (_value >> 8);
}

int Fixed::getRawBits() const{
	return _value;
}

void Fixed::setRawBits(const int raw) {
	_value = raw;
}
Fixed::~Fixed(){
//	std::cout << "Destructor called " << std::endl;
}
Fixed & Fixed::operator=(const Fixed &a){
	_value = a.getRawBits();
	return (*this);
}

std::ostream & operator<<(std::ostream &stream, Fixed const & number){
	stream << number.toFloat();
	return (stream);
}

Fixed Fixed::operator+(const Fixed &num1) const{
	Fixed temp;
	temp.setRawBits(getRawBits() + num1.getRawBits());
	return(temp);
}

Fixed & Fixed::operator++(void){
	Fixed temp;

	setRawBits(getRawBits() + 1);
	return(*this);
}

Fixed Fixed::operator++(int){
	++(*this);
	return(*this);
}

Fixed & Fixed::operator--(void){
	Fixed temp;

	setRawBits(getRawBits() - 1);
	return(*this);
}

Fixed Fixed::operator--(int){
	--(*this);
	return(*this);
}

Fixed Fixed::operator-(const Fixed &num1) const{
	Fixed temp;
	temp.setRawBits(getRawBits() - num1.getRawBits());
	return(temp);
}

Fixed Fixed::operator*(const Fixed &num1) const{
	Fixed temp;
	temp.setRawBits((getRawBits() * num1.getRawBits()) >> 8);
	return(temp);
}

Fixed Fixed::operator/(const Fixed &num1) const{
	return(Fixed(toFloat() / num1.toFloat()));
}

bool Fixed::operator<(const Fixed &a) const{
	if (a.getRawBits() < getRawBits()) {
		return false;
	} else {
		return true;
	}
}

bool Fixed::operator>(const Fixed &a) const{
	return (a.getRawBits() < getRawBits());
}

bool Fixed::operator>=(const Fixed &a) const{
	return (a.getRawBits() >= getRawBits());
}

bool Fixed::operator<=(const Fixed &a) const{
	return (a.getRawBits() <= getRawBits());
}

bool Fixed::operator==(const Fixed &a) const{
	return (a.getRawBits() == getRawBits());
}

bool Fixed::operator!=(const Fixed &a) const{
	return (a.getRawBits() != getRawBits());
}

Fixed & Fixed::min(Fixed &a, Fixed &b){
	return(a < b ? a : b);
}

const Fixed & Fixed::min(Fixed const &a, Fixed const &b){
	return(a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b){
	return(a < b ? b : a);
}

const Fixed & Fixed::max(Fixed const &a, Fixed const &b){
	return(a.getRawBits() < b.getRawBits() ? b : a);
}