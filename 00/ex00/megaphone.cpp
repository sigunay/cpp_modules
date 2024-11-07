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
			for (std::string::size_type j = 0; j < input.length(); j++)
				input[j] = toupper(input[j]);
			std::cout << input;
			if (i < argc - 1)
				std::cout << " ";
		}
	}
	std::cout << std::endl;
	return 0;
}