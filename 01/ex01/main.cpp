/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:43:58 by sigunay           #+#    #+#             */
/*   Updated: 2024/11/09 16:43:58 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie* arr = NULL;
	const int n = 0;

	arr = zombieHorde(n, "Foo");
	for (int i = 0; i < n; i++){
		arr[i].announce();
	}
	delete[] arr;
	return 0;
}