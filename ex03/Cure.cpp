/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:48:52 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/05 11:51:45 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Cure.hpp"

Cure::Cure() : AMateria("Cure") {
	std::cout<<"Cure default constructor called"<<std::endl;
}

Cure::Cure(const Cure & src) : AMateria("Cure") {
	*this = src;
	std::cout<<"Cure copy constructor called"<<std::endl;
}

Cure&	Cure::operator=(const Cure& src) {
	if (this == &src)
		return *this;
	*this = src;
	return *this;
}

Cure::~Cure() {
	std::cout<<"Cure destructor called"<<std::endl;
}

AMateria*	Cure::clone() const {
	Cure	clone(*this);
	return &clone;
}

void	Cure::use(ICharacter& target) {
	std::cout<<"* heals "<<target.getName()<<"’s wounds *"<<\
std::endl;
}
