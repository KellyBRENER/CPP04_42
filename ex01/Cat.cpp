/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:49:31 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/05 10:16:06 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Cat.hpp"


Cat::Cat() {
	type = "cat";
	_brain = new Brain();
	std::cout<<"cat default constructor called"<<std::endl;
}

Cat::Cat(const Cat& src) : Animal(src) {
	std::cout<<"Cat copy constructor called"<<std::endl;
	_brain = new Brain();
	*_brain = src.getBrain();
}

Cat::~Cat() {
	delete _brain;
	std::cout<<"Cat destructor called"<<std::endl;
}

Cat&	Cat::operator=(const Cat& src) {
	std::cout<<"Cat assignation overload called"<<std::endl;
	if (this == &src)
		return *this;
	delete _brain;
	_brain = new Brain();
	*_brain = src.getBrain();
	return (*this);
}

Brain&	Cat::getBrain() const {
	return (*_brain);
}

void	Cat::makeSound() const{
	std::cout<<"MIAAAAOOUUUhhhhh....rrrrrr"<<std::endl;
}

