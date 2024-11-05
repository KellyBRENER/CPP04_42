/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:21:39 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/05 12:18:01 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "AMateria.hpp"

AMateria::AMateria() {
	_type = "empty";
	std::cout<<"AMateria default constructor called"<<std::endl;
}

AMateria::AMateria(std::string const & type) {
	_type = type;
	std::cout<<"AMateria constructor called"<<std::endl;
}

AMateria::~AMateria() {
	std::cout<<"AMateria destructor called"<<std::endl;
}

std::string const &	AMateria::getType() const {
	return (_type);
}

void	AMateria::use(ICharacter& target) {

}
