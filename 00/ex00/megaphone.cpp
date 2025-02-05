#include <iostream>

int main (int argc, char **argv) {
	std::string	input;

	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
		}
	else {
		for (int i = 1; i < argc; i++)
		{
			input = argv[i];
			for (unsigned int j = 0; j < input.length(); j++)
				input[j] = toupper(input[j]);
			std::cout << input;
		}
	}
	std::cout << std::endl;
	return 0;
}