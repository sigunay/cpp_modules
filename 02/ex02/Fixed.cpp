/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:23:01 by sigunay           #+#    #+#             */
/*   Updated: 2025/01/05 11:23:01 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

// Default constructor
Fixed::Fixed() : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

//	Copy constructor
Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPointValue = other._fixedPointValue;
}

//	Constructor functions
Fixed::Fixed(const int value) {
	this->_fixedPointValue = value << _fractionalBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) {
	this->_fixedPointValue = roundf(value * (1 << _fractionalBits));
	std::cout << "Float constructor called" << std::endl;
}

//	Assignment operator overload
Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {	// self-assignment check
		this->_fixedPointValue = other._fixedPointValue;
	}
	return *this;
}

// ostream operator overload
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}

// Arithmetic operators overloads
Fixed Fixed::operator+(const Fixed& other) const {
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const {
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const {
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const {
	return Fixed(this->toFloat() / other.toFloat());
}

// Comparison operators overloads
bool Fixed::operator==(const Fixed& other) const {
	return this->_fixedPointValue == other._fixedPointValue;
}

bool Fixed::operator!=(const Fixed& other) const {
	return !(*this == other);
}

bool Fixed::operator<(const Fixed& other) const {
	return this->_fixedPointValue < other._fixedPointValue;
}

bool Fixed::operator>(const Fixed& other) const {
	return other < *this;
}

bool Fixed::operator<=(const Fixed& other) const {
	return !(other < *this);
}

bool Fixed::operator>=(const Fixed& other) const {
	return !(*this < other);
}

// Prefix increment and decrement operators overloads
Fixed& Fixed::operator++() {
	this->_fixedPointValue++;
	return *this;
}

Fixed& Fixed::operator--() {
	this->_fixedPointValue--;
	return *this;
}

// Postfix increment and decrement operators overloads
Fixed Fixed::operator++(int) {
	Fixed temp = *this;
	++(*this);
	return temp;
}

Fixed Fixed::operator--(int) {
	Fixed temp = *this;
	--(*this);
	return temp;
}

// Destructor function
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

// Getter and setter functions
int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

// Conversion functions
int Fixed::toInt() const {
	return _fixedPointValue >> _fractionalBits;
}

float Fixed::toFloat() const {
	return (float)_fixedPointValue / (1 << _fractionalBits);
}

// Static min and max functions
Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return (a > b) ? a : b;
}