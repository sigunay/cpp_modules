/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigunay <sigunay@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:26:50 by sigunay           #+#    #+#             */
/*   Updated: 2024/11/03 23:26:50 by sigunay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	formatField(const std::string &field){
	if (field.length() > 10){
		return (field.substr(0, 9) + ".");
	} else
		return (field);
}

bool isNum(const std::string& str){
    for (std::size_t i = 0; i < str.length(); ++i) {
        if (!std::isdigit(str[i])) return false;
    }
    return true;
}