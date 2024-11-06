/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:49:31 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/04 16:07:11 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "WrongCat.hpp"


WrongCat::WrongCat() : WrongAnimal() {
	type = "WrongCat";
	std::cout<<"WrongCat default constructor called"<<std::endl;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src) {
	*this = src;
}

WrongCat::~WrongCat() {
	std::cout<<"WrongCat destructor called"<<std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& src) {
	WrongAnimal::operator=(src);
	return (*this);
}

void	WrongCat::makeSound() const{
	std::cout<<"MOUAF MOUAF"<<std::endl;
}

