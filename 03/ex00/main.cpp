/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:25:57 by sigunay           #+#    #+#             */
/*   Updated: 2025/01/18 15:25:57 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap clap1("Clap1");
	ClapTrap clap2("Clap2");

// Print the attributes
	std::cout << "Clap1" << std::endl;
	std::cout << clap1.getName() << std::endl;
	std::cout << clap1.getHitPoints() << std::endl;
	std::cout << clap1.getEnergyPoints() << std::endl;
	std::cout << clap1.getAttackDamage() << std::endl;

// Normal cases
	clap1.attack(clap2.getName());
	clap2.takeDamage(5);
	clap2.beRepaired(5);

// No energy points left
	for (size_t i = 0; i < 9; i++) {
		clap1.attack(clap2.getName());
	}
	std::cout << clap1.getEnergyPoints() << std::endl;
	clap1.attack(clap2.getName());
	clap1.takeDamage(5);
	clap1.beRepaired(5);

// No hit points left
	clap1.takeDamage(10);
	clap1.beRepaired(5);
	clap1.attack(clap2.getName());
}