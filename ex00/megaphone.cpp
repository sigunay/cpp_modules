/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 00:30:14 by sigunay           #+#    #+#             */
/*   Updated: 2024/10/20 00:30:14 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>

int main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	} else {
		for (int i = 1; i < argc; i++)
		{
			std::string	str = argv[i];
			std::transform (str.begin(), str.end(), str.begin(), ::toupper);
			std::cout << str;
			if (i < argc - 1)
				std::cout << " ";
		}
	}
	std::cout << std::endl;
	return 0;
}