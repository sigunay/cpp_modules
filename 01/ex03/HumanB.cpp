#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& n) : name(n), weapon(NULL) {}

void HumanB::setWeapon(Weapon& newWeapon) {
	weapon = &newWeapon;
}

void HumanB::attack() const {
	if (weapon) {
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	} else {
		std::cout << name << " has no weapon to attack with " << std::endl;
	}
}