#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
	std::string name;
	int	zombieIndex;
public:
	Zombie();					// Constructor
	Zombie(std::string name);	// Constructor
	~Zombie();					// Destructor
	void announce() const;		// Announce
	void setName(std::string name);
};

Zombie* zombieHorde(int n, std::string name);

#endif