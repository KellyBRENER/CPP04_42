/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:49:31 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/06 15:06:01 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() : Animal() {
	type = "cat";
	std::cout<<"cat default constructor called"<<std::endl;
}

Cat::Cat(const Cat& src) : Animal(src) {
	*this = src;
}

Cat::~Cat() {
	std::cout<<"Cat destructor called"<<std::endl;
}

Cat&	Cat::operator=(const Cat& src) {
	Animal::operator=(src);
	return (*this);
}

void	Cat::makeSound() const{
	std::cout<<"MIAAAAOOUUUhhhhh....rrrrrr"<<std::endl;
}

