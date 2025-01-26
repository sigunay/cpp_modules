/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:18:56 by sigunay           #+#    #+#             */
/*   Updated: 2025/01/23 10:18:56 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"	

// Orthodox Canonical Form
FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hitPoints = FRAGTRAP_DEFAULT_HIT_POINTS;
	this->_energyPoints = FRAGTRAP_DEFAULT_ENERGY_POINTS;
	this->_attackDamage = FRAGTRAP_DEFAULT_ATTACK_DAMAGE;
	this->_maxHitPoints = FRAGTRAP_DEFAULT_HIT_POINTS;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	std::cout << "FragTrap parameterized constructor called for: " << this->_name << std::endl;
	this->_hitPoints = FRAGTRAP_DEFAULT_HIT_POINTS;
	this->_energyPoints = FRAGTRAP_DEFAULT_ENERGY_POINTS;
	this->_attackDamage = FRAGTRAP_DEFAULT_ATTACK_DAMAGE;
	this->_maxHitPoints = FRAGTRAP_DEFAULT_HIT_POINTS;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called for: " << this->_name << std::endl;
}

// FragTrap specific functions
void FragTrap::highFivesGuys(void) {
	if (this->_hitPoints == 0) {
		std::cout << "FragTrap " << this->_name << " is dead and cannot high five" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name << " requests a high five" << std::endl;
}