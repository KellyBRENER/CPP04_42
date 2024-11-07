/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:36:20 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/07 14:42:32 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout<<"Ice default constructor called"<<std::endl;
}

Ice::Ice(const Ice & src) : AMateria(src) {
	std::cout<<"Ice copy constructor called"<<std::endl;
}

Ice&	Ice::operator=(const Ice& src) {
	if (this == &src)
		return *this;
	_type = src._type;
	return *this;
}

Ice::~Ice() {
	std::cout<<"Ice destructor called"<<std::endl;
}

AMateria*	Ice::clone() const {
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target) {
	std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<\
std::endl;
}
