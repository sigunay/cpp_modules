/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:15:46 by sigunay           #+#    #+#             */
/*   Updated: 2024/11/02 18:15:46 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iomanip>

void Contact::setName (const std::string &arg){
	name = arg;
}

void  Contact::setSurname (const std::string &arg){
	surname = arg;
}

void  Contact::setNickName (const std::string &arg){
	nickName = arg;
}

void  Contact::setNumber (const std::string &arg){
	number = arg;
}

void  Contact::setDarkestSecret (const std::string &arg){
	darkestSecret = arg;
}

void Contact::displayContactShort (){
	std::cout	<< std::setw(10) << std::right << formatField(name) << " | "
				<< std::setw(10) << std::right << formatField(surname) << " | "
				<< std::setw(10) << std::right << formatField(nickName) << std::endl;
}

void Contact::displayContact (){
	std::cout	<< "Name: " << name << '\n'
				<< "Surname: " << surname << '\n'
				<< "Nickname: " << nickName << '\n'
				<< "Number: " << number << '\n'
				<< "Darkest Secret: " << darkestSecret << std::endl;
}