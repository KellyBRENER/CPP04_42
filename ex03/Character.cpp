/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:08:00 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/05 12:23:56 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Character.hpp"

Character::Character() : _name("unknown"), _inventaire(NULL) {
	std::cout<<"Character default constructor called"<<std::endl;
}

Character::Character(const std::string& name) : _name(name) , _inventaire(NULL)
{
	std::cout<<"Character constructor called"<<std::endl;
}

Character::Character(const Character& src) {
	_name = src.getName();
	if (_inventaire) {
		for (int i = 0; i < 4; ++i) {
			if (_inventaire[i])
		}
	}
	std::cout<<"Character copy constructor called"<<std::endl;
}

Character::~Character() {
	std::cout<<"Character destructor called"<<std::endl;
}

Character&	Character::operator=(const Character& src) {
	std::cout<<"Character assignation overload called"<<std::endl;
	if (this == &src)
		return *this;
	*this = src;
	return *this;
}


