#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#define SCAVTRAP_DEFAULT_HIT_POINTS 100
#define SCAVTRAP_DEFAULT_ENERGY_POINTS 50
#define SCAVTRAP_DEFAULT_ATTACK_DAMAGE 20

class ScavTrap : public ClapTrap {
private:
	bool _isGuardingGate;
public:
	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& other);
	ScavTrap& operator=(const ScavTrap& other);
	~ScavTrap();

//	override ClapTrap's attack function
	void attack(const std::string& target);
// 	ScavTrap's unique member function
	void guardGate();
};

#endif