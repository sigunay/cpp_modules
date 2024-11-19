#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
	std::string name;
public:
	Zombie(std::string name);	//Constructor
	~Zombie();
	void announce() const;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif