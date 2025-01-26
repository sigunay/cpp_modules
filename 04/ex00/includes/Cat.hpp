#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
// Orthodox Canonical Form
	Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	~Cat();
// Functions
	void makeSound() const;
};

#endif