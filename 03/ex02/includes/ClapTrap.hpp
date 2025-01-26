#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define DEFAULT_HIT_POINTS 10
#define DEFAULT_ENERGY_POINTS 10
#define DEFAULT_ATTACK_DAMAGE 0

class ClapTrap {
protected:
	std::string	_name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;
	unsigned int _maxHitPoints;
public:

//	Orthodox Canonical Form
	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	~ClapTrap();
//	Public member functions
	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

//	Getters
	std::string getName() const;
	unsigned int getHitPoints() const;
	unsigned int getEnergyPoints() const;
	unsigned int getAttackDamage() const;

};

#endif