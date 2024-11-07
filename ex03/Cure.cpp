/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:48:52 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/07 14:42:01 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout<<"Cure default constructor called"<<std::endl;
}

Cure::Cure(const Cure & src) : AMateria(src) {
	std::cout<<"Cure copy constructor called"<<std::endl;
}

Cure&	Cure::operator=(const Cure& src) {
	if (this == &src)
		return *this;
	_type = src._type;
		return *this;
}

Cure::~Cure() {
	std::cout<<"Cure destructor called"<<std::endl;
}

AMateria*	Cure::clone() const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target) {
	std::cout<<"* heals "<<target.getName()<<"’s wounds *"<<\
std::endl;
}
