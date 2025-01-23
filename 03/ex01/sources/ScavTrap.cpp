/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:09:50 by sigunay           #+#    #+#             */
/*   Updated: 2025/01/21 12:09:50 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

//	Orthodox Canonical Form
ScavTrap::ScavTrap() : ClapTrap(), _isGuardingGate(false) {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hitPoints = SCAVTRAP_DEFAULT_HIT_POINTS;
	this->_energyPoints = SCAVTRAP_DEFAULT_ENERGY_POINTS;
	this->_attackDamage = SCAVTRAP_DEFAULT_ATTACK_DAMAGE;
	this->_maxHitPoints = SCAVTRAP_DEFAULT_HIT_POINTS;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name), _isGuardingGate(false) {
	std::cout << "ScavTrap parameterized constructor called for " << name << std::endl;
	this->_hitPoints = SCAVTRAP_DEFAULT_HIT_POINTS;
	this->_energyPoints = SCAVTRAP_DEFAULT_ENERGY_POINTS;
	this->_attackDamage = SCAVTRAP_DEFAULT_ATTACK_DAMAGE;
	this->_maxHitPoints = SCAVTRAP_DEFAULT_HIT_POINTS;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->_isGuardingGate = other._isGuardingGate;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
		_isGuardingGate = other._isGuardingGate;
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called for " << getName() << std::endl;
}

// Override ClapTrap's attack function
void ScavTrap::attack(const std::string& target) {
	if (this->_hitPoints == 0) {
		std::cout << "ScavTrap " << this->_name << " has no hit points left to attack!"
				  << std::endl;
		return;
	}
	if (this->_energyPoints == 0) {
		std::cout << "ScavTrap " << this->_name << " has no energy points left to attack!"
				  << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target
			  << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

// ScavTrap's unique member function
void ScavTrap::guardGate() {
	if (_hitPoints == 0) {
		std::cout << "ScavTrap " << this->_name << " is too damage to guard anything!"
				  << std::endl;
		return;
	}
    if (this->_isGuardingGate) {
		std::cout << "ScavTrap " << this->_name << " is already in Gate keeper mode!" << std::endl;
		return;
    }
	_isGuardingGate = true;
	std::cout << "ScavTrap " << this->_name <<  " is now in Gate keeper mode!" << std::endl;
}