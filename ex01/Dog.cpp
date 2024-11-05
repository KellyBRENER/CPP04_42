/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:48:43 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/05 10:17:07 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Dog.hpp"

Dog::Dog() {
	type = "dog";
	_brain = new Brain();
	std::cout<<"Dog default constructor called"<<std::endl;
}

Dog::Dog(const Dog& src) : Animal(src) {
	std::cout<<"Dog copy constructor called"<<std::endl;
	_brain = new Brain();
	*_brain = src.getBrain();
}

Dog::~Dog() {
	delete _brain;
	std::cout<<"Dog destructor called"<<std::endl;
}

Dog&	Dog::operator=(const Dog& src) {
	std::cout<<"Dog assignation overload called"<<std::endl;
	if (this == &src)
		return *this;
	delete _brain;
	_brain = new Brain();
	*_brain = src.getBrain();
	return (*this);
}

Brain&	Dog::getBrain() const {
	return (*_brain);
}

void	Dog::makeSound() const {
	std::cout<<"OUAF OUAF"<<std::endl;
}
