#ifndef CONTACT_HPP
# define CONTACT_HPP

//lib
#include <iostream>

// class
class Contact {
private:
	std::string	name;
	std::string	surname;
	std::string	nickName;
	std::string	number;
	std::string	darkestSecret;
public:
	Contact() {
		std::cout << "Contact created!" << std::endl;
	}
	~Contact() {
		std::cout << "Contact destroyed!" << std::endl;
	}
	void setName (const std::string &arg);
	void setSurname (const std::string &arg);
	void setNickName (const std::string &arg);
	void setNumber (const std::string &arg);
	void setDarkestSecret (const std::string &arg);
	void displayContact ();
	void displayContactShort ();
};

//utils funcs
std::string	formatField(const std::string &field);

#endif