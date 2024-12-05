#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
private:
	void debug();
	void info();
	void warning();
	void error();
public:
	void harlFiltered(std::string level);
};

#endif