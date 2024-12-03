#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& n, Weapon& w) : name(n), weapon(w) {}

void HumanA::attack() const {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}