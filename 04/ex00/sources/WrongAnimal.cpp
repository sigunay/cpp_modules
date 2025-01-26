/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 09:11:21 by sigunay           #+#    #+#             */
/*   Updated: 2025/01/26 09:11:21 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

// Constructors, destructor and operator= functions
WrongAnimal::WrongAnimal() : _type("unnamed") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

// Functions
std::string WrongAnimal::getType() const {
	return this->_type;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sound" << std::endl;
}