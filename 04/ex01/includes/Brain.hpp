#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
private:
	std::string ideas[100];
public:
//	Orthodox Canonical Form
	Brain();
	// parameterized constructor olmalı mı? 
	// default constructor ideas arrayini dolduracak bir şey yapmıyor
	Brain(const Brain& copy);
	Brain &operator=(const Brain &copy);
	~Brain();
	std::string getIdea(int index) const;
	void setIdea(int index, const std::string& idea);
};

#endif