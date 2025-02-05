#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

//libraries
#include "contact.hpp"

class PhoneBook {
private:
	Contact	person[8];
	int	contactIndex;
public:
	PhoneBook();	// hatalı!!! yalnızca bildirim olmalı tanım değil
	void addContact ();
	void searchContact ();
};
// utils funcs
bool isNum(const std::string& str);

#endif