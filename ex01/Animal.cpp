/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:27:58 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/06 16:54:35 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	type = "animal";
	std::cout<<"Animal default constructor called"<<std::endl;
}

Animal::~Animal() {
	std::cout<<"Animal destructor called"<<std::endl;
}

Animal::Animal(const Animal& src) {
	*this = src;
	std::cout<<"Animal copy constructor called"<<std::endl;
}

Animal&	Animal::operator=(const Animal& src) {
	std::cout<<"Animal assignation overload called"<<std::endl;
	if (this == &src)
		return (*this);
	type = src.type;
	return *this;
}

std::string	Animal::getType() const {
	return (this->type);
}

void	Animal::makeSound() const{
	std::cout<<"fybuisdokzqpadx;cvzej"<<std::endl;
}
