/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:44:03 by sigunay           #+#    #+#             */
/*   Updated: 2024/11/09 16:44:03 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde(int n, std::string name){
	if (n <= 0)
		return NULL;
	Zombie* horde = new Zombie[n];

	for (int i = 0; i < n; i++){
		std::stringstream ss;
		ss << name << i;
		horde[i].setName(ss.str());
	}
	return horde;
}