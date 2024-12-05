/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:18:41 by sigunay           #+#    #+#             */
/*   Updated: 2024/12/05 14:18:41 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::debug() {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "This is a debug message." << std::endl;
}

void Harl::info() {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "This is an info message." << std::endl;
}

void Harl::warning() {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "This is a warning message." << std::endl;
}

void Harl::error() {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is an error message." << std::endl;
}

void Harl::harlFiltered(std::string level) {
	int levelIndex = -1;
	void (Harl::*memberFuncs[]) () = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			levelIndex = i;
			break;
		}
	}

	switch (levelIndex)
	{
	case 0:
		(this->*memberFuncs[0])();
		// fallthrough
	case 1:
		(this->*memberFuncs[1])();
		// fallthrough
	case 2:
		(this->*memberFuncs[2])();
		// fallthrough
	case 3:
		(this->*memberFuncs[3])();
		break;
	default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
	}
}