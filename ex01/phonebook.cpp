/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:37:32 by sigunay           #+#    #+#             */
/*   Updated: 2024/11/02 17:37:32 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iomanip>
#include <limits>

void PhoneBook::addContact (){
	Contact newContact;
	std::string input;
	std::string fields[5] = {"Name", "Surname", "Nickname", "Number", "Darkest Secret"};
	std::string inputs[5];

	for (int i = 0; i < 5;)
	{
		std::cout << fields[i] << ": ";
		std::getline(std::cin, input);
		if (!input.empty()){
			inputs[i] = input;
			i++;
		} else
			std::cout << "This field cannot be empty!" << std::endl;
	}

	newContact.setName(inputs[0]);
	newContact.setSurname(inputs[1]);
	newContact.setNickName(inputs[2]);
	newContact.setNumber(inputs[3]);
	newContact.setDarkestSecret(inputs[4]);

	person[contactIndex % 8] = newContact;
	contactIndex++;
}

void PhoneBook::searchContact() {
    int indexInput;
    std::string tmp;

    if (contactIndex == 0) {
        std::cout << "PhoneBook is empty!" << std::endl;
        return;
    }

    // Kişi listesini göster
    std::cout << std::setw(10) << "Index" << " | "
              << std::setw(10) << "Name" << " | "
              << std::setw(10) << "Surname" << " | "
              << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < (contactIndex < 8 ? contactIndex : 8); i++) {
        std::cout << std::setw(10) << i + 1 << " | ";
        person[i].displayContactShort();
    }

    // Kullanıcıdan indeks al
    while (true) {
        std::cout << "Enter the index of the person you want to view: ";
        std::getline(std::cin, tmp);

        if (tmp.empty()) {  // Boş giriş kontrolü
            std::cout << "Input cannot be empty! Please enter a valid index." << std::endl;
            continue;
        }

        if (!isNum(tmp)) {  // Sayısal olmayan girdi kontrolü
            std::cout << "Invalid input! Please enter a valid index." << std::endl;
            continue;
        }

        indexInput = std::atoi(tmp.c_str());  // Geçerli bir sayıysa integera çevir

        // Geçerli aralıkta bir indeks kontrolü
        if (indexInput > 0 && indexInput <= (contactIndex < 8 ? contactIndex : 8)) {
            person[indexInput - 1].displayContact();
            break;
        } else {
            std::cout << "Index out of range! Please enter a valid index." << std::endl;
        }
    }
}