/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:49:31 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/06 17:04:10 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() : Animal() {
	type = "Cat";
	std::cout<<"cat default constructor called"<<std::endl;
}

Cat::Cat(const Cat& src) : Animal(src) {
	std::cout<<"Cat copy constructor called"<<std::endl;
	*this = src;
}

Cat::~Cat() {
	std::cout<<"Cat destructor called"<<std::endl;
}

Cat&	Cat::operator=(const Cat& src) {
	std::cout<<"Cat assignation overload called"<<std::endl;
	Animal::operator=(src);
	return (*this);
}

void	Cat::makeSound() const{
	std::cout<<"MIAAAAOOUUUhhhhh....rrrrrr"<<std::endl;
}

