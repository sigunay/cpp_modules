/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 08:37:33 by sigunay           #+#    #+#             */
/*   Updated: 2025/01/26 08:37:33 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

int main() {
//	Constructor test
	std::cout << "===Constructor test===\n" << std::endl;
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

//	Polymorphism test
	std::cout << "\n===Polymorphism test===\n" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound(); //will output the cat sound!
	meta->makeSound();

//	Destructor test
	std::cout << "\n===Destructor test===\n" << std::endl;
	delete meta;
	delete j;
	delete i;

// WrongCat test
	std::cout << "\n===WrongCat test===\n" << std::endl;
	const WrongAnimal *meta2 = new WrongAnimal();
	const WrongAnimal *i2 = new WrongCat();

	std::cout << i2->getType() << " " << std::endl;
	i2->makeSound(); // will output the wrong cat sound!

//	Destructor test
	std::cout << "\n===Destructor test===\n" << std::endl;
	delete meta2;
	delete i2;

	return 0;

}