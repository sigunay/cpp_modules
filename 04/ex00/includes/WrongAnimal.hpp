#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
	std::string _type;
public:
// Orthodox Canonical Form
	WrongAnimal();
	WrongAnimal(const WrongAnimal &wrongAnimal);
	WrongAnimal &operator=(const WrongAnimal &wrongAnimal);
	~WrongAnimal();
// Member Functions
	std::string getType() const;
	void makeSound() const;
};

#endif