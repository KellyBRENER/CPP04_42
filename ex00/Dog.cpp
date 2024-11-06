/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:48:43 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/06 17:04:27 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	type = "Dog";
	std::cout<<"Dog default constructor called"<<std::endl;
}

Dog::Dog(const Dog& src) : Animal(src) {
	std::cout<<"Dog copy constructor called"<<std::endl;
	*this = src;
}

Dog::~Dog() {
	std::cout<<"Dog destructor called"<<std::endl;
}

Dog&	Dog::operator=(const Dog& src) {
	std::cout<<"Dog assignation overload called"<<std::endl;
	Animal::operator=(src);
	return (*this);
}

void	Dog::makeSound() const {
	std::cout<<"OUAF OUAF"<<std::endl;
}
