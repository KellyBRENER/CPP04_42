/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:27:58 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/07 13:37:09 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Animal.hpp"

Animal::Animal() {
	type = "Animal";
	std::cout<<"Animal default constructor called"<<std::endl;
}

Animal::~Animal() {
	std::cout<<"Animal destructor called"<<std::endl;
}

Animal::Animal(const Animal& src) {
	std::cout<<"Animal copy constructor called"<<std::endl;
	*this = src;
}

Animal&	Animal::operator=(const Animal& src) {
	std::cout<<"Animal assignation overload called"<<std::endl;
	if (this == &src)
		return *this;
	type = src.type;
	return (*this);
}

std::string	Animal::getType() const {
	return (this->type);
}

void	Animal::makeSound() const{
	std::cout<<"fybuisdokzqpadx;cvzej"<<std::endl;
}
