/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:39:12 by sigunay           #+#    #+#             */
/*   Updated: 2025/01/25 15:39:12 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain(*other._brain);
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow meow" << std::endl;
}

Brain* Cat::getBrain() const {
	return this->_brain;
}