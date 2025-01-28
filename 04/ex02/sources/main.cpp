/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:16:23 by sigunay           #+#    #+#             */
/*   Updated: 2025/01/27 17:16:23 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main() {
// Polymorphism Test
	std::cout << "\n===> Polymorphism Test <===\n";
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	j->makeSound();
	i->makeSound();

	delete j;
	delete i;
// Dog Brain's Getter Setter Test
	std::cout << "\n===> DOG Brain's Getter & Setter Test <===\n";
	Dog basicDog;

	basicDog.getBrain()->setIdea(0, "I want a bone!");
	basicDog.getBrain()->setIdea(1, "I want to play!");
	std::cout << "1. index of basicDog's brain: " << basicDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "2. index of basicDog's brain: " << basicDog.getBrain()->getIdea(1) << std::endl;
	std::cout << "3. index of basicDog's brain: " << basicDog.getBrain()->getIdea(2) << std::endl;
// Dog Copy Constructor Deep Copy Test
	std::cout << "\n===> DOG Copy Constructor Deep Copy Test <===\n";
	{
		Dog copyDog = basicDog;
		std::cout << "1. index of copyDog's brain: " << copyDog.getBrain()->getIdea(0) << std::endl;
		std::cout << "2. index of copyDog's brain: " << copyDog.getBrain()->getIdea(1) << std::endl;
		std::cout << "basicDog's brain address: " << basicDog.getBrain() << std::endl;
		std::cout << "copyDog's brain address: " << copyDog.getBrain() << std::endl;
	}
// Dog Copy Assignment Operator Deep Copy Test
	std::cout << "\n===> DOG Copy Assignment Operator Deep Copy Test <===\n";
	{
		Dog assignDog;
		assignDog = basicDog;
		std::cout << "1. index of assignDog's brain: " << assignDog.getBrain()->getIdea(0) << std::endl;
		std::cout << "2. index of assignDog's brain: " << assignDog.getBrain()->getIdea(1) << std::endl;
		std::cout << "basicDog's brain address: " << basicDog.getBrain() << std::endl;
		std::cout << "assignDog's brain address: " << assignDog.getBrain() << std::endl;
	}
// Cat Brain's Getter Setter Test
	std::cout << "\n===> CAT Brain's Getter & Setter Test <===\n";
	Cat basicCat;

	basicCat.getBrain()->setIdea(0, "I want a fish!");
	basicCat.getBrain()->setIdea(1, "I want to sleep!");
	std::cout << "1. index of basicCat's brain: " << basicCat.getBrain()->getIdea(0) << std::endl;
	std::cout << "2. index of basicCat's brain: " << basicCat.getBrain()->getIdea(1) << std::endl;
	std::cout << "3. index of basicCat's brain: " << basicCat.getBrain()->getIdea(2) << std::endl;
// Cat Copy Constructor Deep Copy Test
	std::cout << "\n===> CAT Copy Constructor Deep Copy Test <===\n";
	{
		Cat copyCat = basicCat;
		std::cout << "1. index of copyCat's brain: " << copyCat.getBrain()->getIdea(0) << std::endl;
		std::cout << "2. index of copyCat's brain: " << copyCat.getBrain()->getIdea(1) << std::endl;
		std::cout << "basicCat's brain address: " << basicCat.getBrain() << std::endl;
		std::cout << "copyCat's brain address: " << copyCat.getBrain() << std::endl;
	}
// Cat Copy Assignment Operator Deep Copy Test
	std::cout << "\n===> CAT Copy Assignment Operator Deep Copy Test <===\n";
	{
		Cat assignCat;
		assignCat = basicCat;
		std::cout << "1. index of assignCat's brain: " << assignCat.getBrain()->getIdea(0) << std::endl;
		std::cout << "2. index of assignCat's brain: " << assignCat.getBrain()->getIdea(1) << std::endl;
		std::cout << "basicCat's brain address: " << basicCat.getBrain() << std::endl;
		std::cout << "assignCat's brain address: " << assignCat.getBrain() << std::endl;
	}

//	Array of Animals Test
	std::cout << "\n===> Array of Animals Test <===\n";
	const int animalCount = 4;
	Animal* animals[animalCount];

	for (int i = 0; i < animalCount; i++) {
		if (i % 2 == 0) {
			animals[i] = new Dog();
		}
		else {
			animals[i] = new Cat();
		}
	}

	for (int i = 0; i < animalCount; i++) {
		delete animals[i];
	}
// Abstract Class Test
	// std::cout << "\n===> Abstract Class Test <===\n";
	// Animal abstractAnimal;	// should Error: cannot declare variable 'abstractAnimal' to be of abstract type 'Animal'

	std::cout << "\n===> Program End <===\n";

	return 0;
}