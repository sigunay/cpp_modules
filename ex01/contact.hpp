#include <iostream>
#include <iomanip>
#include <string>

class Contact {
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;

public:
	// setter functions
	void setName(const std::string &arg) {
		firstName = arg;
	}
	void setLastName(const std::string &arg) {
		lastName = arg;
	}
	void setNickName(const std::string &arg) {
		nickName = arg;
	}
	void setPhoneNumber(const std::string &arg) {
		phoneNumber = arg;
	}
	void setDarkestSecret(const std::string &arg) {
		darkestSecret = arg;
	}
	void displayContact() const {
		std::cout	<< "Name: " << firstName << "\n"
					<< "Lastname: " << lastName << "\n"
					<< "Nickname: " << nickName << "\n"
					<< "Phone Number: " << phoneNumber << "\n"
					<< "Darkest Secret: " << darkestSecret << "\n";
	}
	void displayContactShort() const {
		std::cout	<< std::setw(10) << std::right << firstName << " | "
					<< std::setw(10) << std::right << lastName << " | "
					<< std::setw(10) << std::right << nickName << std::endl;
	}
};