/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:27:58 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/04 16:06:12 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	type = "WrongAnimal";
	std::cout<<"WrongAnimal default constructor called"<<std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout<<"WrongAnimal destructor called"<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) {
	*this = src;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& src) {
	if (this == &src)
		return *this;
	type = src.type;
	return (*this);
}

std::string	WrongAnimal::getType() const {
	return (this->type);
}

void	WrongAnimal::makeSound() const{
	std::cout<<"weeeeiiird"<<std::endl;
}
