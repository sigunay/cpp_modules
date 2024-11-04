#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

//libraries
#include "contact.hpp"

class PhoneBook
{
private:
	Contact	person[8];
	int	contactIndex;
public:
	PhoneBook () : contactIndex(0) { }
	void addContact ();
	void searchContact ();
};
// utils funcs
bool isNum(const std::string& str);

#endif