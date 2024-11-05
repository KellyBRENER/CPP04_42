/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:27:58 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/05 11:01:31 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	type = "Aanimal";
	std::cout<<"AAnimal default constructor called"<<std::endl;
}

AAnimal::~AAnimal() {
	std::cout<<"AAnimal destructor called"<<std::endl;
}

AAnimal::AAnimal(const AAnimal& src) {
	std::cout<<"AAnimal copy constructor called"<<std::endl;
	type = src.getType();
}

AAnimal&	AAnimal::operator=(const AAnimal& src) {
	std::cout<<"AAnimal assignation overload called"<<std::endl;
	if (this == &src)
		return (*this);
	type = src.getType();
	return *this;
}

std::string	AAnimal::getType() const {
	return (this->type);
}
