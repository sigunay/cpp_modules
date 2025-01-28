#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain* _brain;
public:
// Orthodox Canonical Form
	Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	~Cat();
// Functions
	void makeSound() const;
// Getter for brain
	Brain* getBrain() const;
};

#endif