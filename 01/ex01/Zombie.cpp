/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:44:00 by sigunay           #+#    #+#             */
/*   Updated: 2024/11/09 16:44:00 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

//Constructor
Zombie::Zombie() : name("NULL Zombie") {};

//Constructor
Zombie::Zombie(std::string name) : name(name) {};

//Destructor
Zombie::~Zombie(){
	std::cout << name << " has been destroyed." << std::endl;
}

//Announce
void Zombie::announce() const {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Set name
void Zombie::setName(std::string name){
	this->name = name;
}