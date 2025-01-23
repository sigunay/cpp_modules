/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:58:44 by sigunay           #+#    #+#             */
/*   Updated: 2025/01/16 18:58:44 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//	Default constructor
ClapTrap::ClapTrap() : _name("unnamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

// 	Parameterized constructor
ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap parameterized constructor called for " << _name << std::endl;
}

//	Copy constructor
ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

// 	Copy Assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

//	Destructor
ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called for " << _name << std::endl;
}

//	Public member functions
void ClapTrap::attack(const std::string& target){
	if (_hitPoints == 0) {
		std::cout << "ClapTrap " << _name << " has no hit points left to attack!"
				  << std::endl;
		return;
	}
	if (_energyPoints == 0) {
		std::cout << "ClapTrap " << _name << " has no energy points left to attack!"
				  << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target
			  << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints == 0) {
		std::cout << "ClapTrap " << _name << " is already destroyed!" << std::endl;
		return;
	}
	if (amount >= _hitPoints) {
		_hitPoints = 0;
	} else {
		_hitPoints -= amount;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount
			  << " points of damage! Hit points left: "
			  << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints == 10) {
		std::cout << "ClapTrap " << _name << " is already at full health!"
				  << std::endl;
		return;
	}
	if (_hitPoints == 0) {
		std::cout << "ClapTrap " << _name << " is too damaged to be repaired!"
				  << std::endl;
		return;
	}
	if (_energyPoints == 0) {
		std::cout << "ClapTrap " << _name << " has no energy points left to repair!"
				  << std::endl;
		return;
	}
	_energyPoints--;
	if (_hitPoints + amount > 10) {
		amount = 10 - _hitPoints;
	}
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " is repairs itself for " << amount
			  << " hit points! Current hit points: " << _hitPoints << std::endl;
}

//	Getters
std::string ClapTrap::getName() const {
	return _name;
}

unsigned int ClapTrap::getHitPoints() const {
	return _hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const {
	return _energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const {
	return _attackDamage;
}