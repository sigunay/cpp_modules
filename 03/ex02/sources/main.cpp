/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:31:30 by sigunay           #+#    #+#             */
/*   Updated: 2025/01/23 16:31:30 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

int main() {
// Test construction/destruction order
	std::cout << "\n=== Testing Constructor Chain ===\n";
	FragTrap ft1;
	FragTrap ft2("ft2");
// Test copy construction and assignment
	std::cout << "\n=== Testing Copy Construction and Assignment ===\n";
	FragTrap ft3(ft2);
	FragTrap ft4;
	
	ft4 = ft3;
// Test basic functions
	std::cout << "\n=== Testing Basic Functions ===\n";
	ft4.attack("Target");
	ft4.takeDamage(10);
	ft4.beRepaired(10);
	ft4.beRepaired(10);
// Test energy point depletion (should take longer than ClapTrap)
	std::cout << "\n=== Testing Energy Point Depletion ===\n";
	for (int i = 0; i < 98; i++) {
		ft4.attack("Target");
	}
	ft4.attack("Target");
	ft4.takeDamage(10);
	ft4.beRepaired(10);
// Test death and repair/high five/attack
	std::cout << "\n=== Testing Death and Repair ===\n";
	ft4.takeDamage(90);
	ft4.beRepaired(10);
	ft4.attack("Target");
	ft4.highFivesGuys();
	ft4.takeDamage(10);
// Test destruction
	std::cout << "\n=== Testing Destructor Chain ===\n";
	return 0;
}
