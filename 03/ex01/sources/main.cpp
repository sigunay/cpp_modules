/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:36:40 by sigunay           #+#    #+#             */
/*   Updated: 2025/01/21 15:36:40 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int main() {
// Test construction/destruction order
	std::cout << "\n=== Testing Constructor Chain ===\n";
	ScavTrap st1("ST-1"); 
// Test copy construction and assignment
	std::cout << "\n=== Testing Copy Construction and Assignment ===\n";
	ScavTrap st2(st1);
	ScavTrap st3;
	st3 = st2;
// Test ScavTrap specific values and functions
	std::cout << "\n=== Testing ScavTrap Specific Values and Functions ===\n";
	st1.attack("Target");
	st1.takeDamage(20);
	st1.beRepaired(10);
	st1.guardGate();
// Test energy point depletion (should take longer than ClapTrap)
	std::cout << "\n=== Testing Energy Point Depletion ===\n";
	for (int i = 0; i < 48; i++) {	// We already used 2 points
		st1.attack("Target");
	}
	st1.attack("Target"); // should fail
	st1.guardGate(); // should'nt fail
// Test inheritance relationship
	std::cout << "\n=== Testing Inheritance Relationship ===\n";
	ClapTrap* ptr = &st1;
	ptr->attack("Target");
// Test destruction order
	std::cout << "\n=== End of Tests ===\n";
	return 0;
}