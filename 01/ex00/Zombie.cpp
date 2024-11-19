/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:27:33 by sigunay           #+#    #+#             */
/*   Updated: 2024/11/08 16:27:33 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie(){
	std::cout << name << " has been destroyed." << std::endl;
}

void Zombie::announce() const{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}