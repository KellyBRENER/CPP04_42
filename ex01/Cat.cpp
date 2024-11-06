/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:49:31 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/06 16:55:08 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() : Animal() {
	type = "cat";
	_brain = new Brain();
	std::cout<<"cat default constructor called"<<std::endl;
}

Cat::Cat(const Cat& src) : Animal(src) {
	std::cout<<"Cat copy constructor called"<<std::endl;
	_brain = new Brain();
	*this = src;
}

Cat::~Cat() {
	delete _brain;
	std::cout<<"Cat destructor called"<<std::endl;
}

Cat&	Cat::operator=(const Cat& src) {
	std::cout<<"Cat assignation overload called"<<std::endl;
	if (this == &src)
		return *this;
	Animal::operator=(src);
	delete _brain;
	_brain = new Brain(*src._brain);
	return (*this);
}

Brain&	Cat::getBrain() const {
	return (*_brain);
}

void	Cat::makeSound() const{
	std::cout<<"MIAAAAOOUUUhhhhh....rrrrrr"<<std::endl;
}

