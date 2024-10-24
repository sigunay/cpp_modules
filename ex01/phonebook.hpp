#include <iostream>
#include <iomanip>
#include <limits>
#include "contact.hpp"

class PhoneBook {
private:
	Contact	contacts[8];
	int	contactIndex;

public:
	PhoneBook() : contactIndex(0) { }	// init liste bir daha bak
	void addContact() {
		Contact	newContact;
		std::string	input;

		std::cout << "Name: ";
		std::getline(std::cin, input);
		newContact.setName(input);

		std::cout << "Last Name: ";
		std::getline(std::cin, input);
		newContact.setLastName(input);

		std::cout << "Nick Name: ";
		std::getline(std::cin, input);
		newContact.setNickName(input);

		std::cout << "Phone Number: ";
		std::getline(std::cin, input);
		newContact.setPhoneNumber(input);

		std::cout << "Darkest Secret: ";
		std::getline(std::cin, input);
		newContact.setDarkestSecret(input);

		contacts[contactIndex % 8] = newContact;
		contactIndex++;
		getchar();
	}
	void searchContacts() const {
		if (contactIndex == 0) {
			std::cout << "Phonebook is empty." << std::endl;
			return ;
		}

		std::cout << std::setw(10) << "Index" << " | "
		          << std::setw(10) << "First Name" << " | "
				  << std::setw(10) << "Last Name" << " | "
				  << std::setw(10) << "Nick Name" << std::endl;

		for (int i = 0; i < (contactIndex < 8 ? contactIndex : 8); i++) {
			std::cout << std::setw(10) << i + 1 << " | ";
			contacts[i].displayContactShort();
		}

		int	index;
		std::cout << "Enter the index of the person you want to view: ";

		while (!(std::cin >> index)) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input. Please enter a valid index: ";
		}
		std::cin.ignore();	// giriş akışını (bufferı) temizler (yeni satır karakteri?) bakılacak

		if (index > 0 && index <= (contactIndex < 8 ? contactIndex : 8)) {
			contacts[index - 1].displayContact();
		} else {
			std::cout << "Invalid index." << std::endl;
		}
	}
};