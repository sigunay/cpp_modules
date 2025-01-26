#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
// orthodox canonical form
	WrongCat();
	WrongCat(WrongCat const &src);
	~WrongCat();
	WrongCat &operator=(WrongCat const &src);
// member functions
	void makeSound() const;
};

#endif