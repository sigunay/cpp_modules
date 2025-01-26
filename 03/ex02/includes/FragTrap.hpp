#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#define FRAGTRAP_DEFAULT_HIT_POINTS 100
#define FRAGTRAP_DEFAULT_ENERGY_POINTS 100
#define FRAGTRAP_DEFAULT_ATTACK_DAMAGE 30

class FragTrap : public ClapTrap {
public:
//	Orthodox Canonical Form
	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& other);
	FragTrap& operator=(const FragTrap& other);
	~FragTrap();
//	FragTrap specific functions
	void highFivesGuys(void);
};

#endif