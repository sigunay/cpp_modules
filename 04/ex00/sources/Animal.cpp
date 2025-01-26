/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:43:26 by sigunay           #+#    #+#             */
/*   Updated: 2025/01/25 10:43:26 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

// Constructors, destructor and operator= functions
Animal::Animal() : _type("unnamed") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : _type(other._type) {
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

// Functions
std::string Animal::getType() const {
	return this->_type;
}

void Animal::makeSound() const {
	std::cout << "Animal sound" << std::endl;
}