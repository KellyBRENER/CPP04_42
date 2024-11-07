/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:21:39 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/07 14:39:02 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() {
	_type = "empty";
	std::cout<<"AMateria default constructor called"<<std::endl;
}

AMateria::AMateria(std::string const & type) {
	_type = type;
	std::cout<<"AMateria constructor called"<<std::endl;
}

AMateria::AMateria(const AMateria & src) {
	*this = src;
	std::cout<<"AMateria copy constructor called"<<std::endl;
}

AMateria&	AMateria::operator=(const AMateria & src) {
	if (this == &src)
		return *this;
	_type = src._type;
	return *this;
}

AMateria::~AMateria() {
	std::cout<<"AMateria destructor called"<<std::endl;
}

std::string const &	AMateria::getType() const {
	return (_type);
}

void	AMateria::use(ICharacter& target) {
	std::cout<<"an AMateria cannot be used, "<<target.getName()<<" can be quiet"\
<<std::endl;
}
