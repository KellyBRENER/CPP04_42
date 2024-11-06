/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:48:43 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/06 15:06:43 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	type = "dog";
	std::cout<<"Dog default constructor called"<<std::endl;
}

Dog::Dog(const Dog& src) : Animal(src) {
	*this = src;
}

Dog::~Dog() {
	std::cout<<"Dog destructor called"<<std::endl;
}

Dog&	Dog::operator=(const Dog& src) {
	Animal::operator=(src);
	return (*this);
}

void	Dog::makeSound() const {
	std::cout<<"OUAF OUAF"<<std::endl;
}
