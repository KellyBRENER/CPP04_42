/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:08:00 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/05 15:17:29 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Character.hpp"

Character::Character() : _name("unknown") {
	_inventory = new AMateria*[4];
	for (int i = 0; i < 4; ++i) {
		_inventory[i] = NULL;
	}
	std::cout<<"Character default constructor called"<<std::endl;
}

Character::Character(const std::string& name) : _name(name) {
	_inventory = new AMateria*[4];
	for (int i = 0; i < 4; ++i) {
		_inventory[i] = NULL;
	}
	std::cout<<"Character constructor called"<<std::endl;
}

Character::Character(const Character& src) {
	_name = src.getName();
	_inventory = new AMateria*[4];
	for (int i = 0; i < 4; ++i) {
		if (src._inventory[i])
			_inventory[i] = src._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	std::cout<<"Character copy constructor called"<<std::endl;
}

Character::~Character() {
	delete_AMateria_tab(_inventory);
	std::cout<<"Character destructor called"<<std::endl;
}

Character&	Character::operator=(const Character& src) {
	std::cout<<"Character assignation overload called"<<std::endl;
	if (this == &src)
		return *this;
	delete_AMateria_tab(_inventory);
	_name = src.getName();
	_inventory = new AMateria*[4];
	for (int i = 0; i < 4; ++i) {
		if (src._inventory[i])
			_inventory[i] = src._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	std::cout<<"Character copy constructor called"<<std::endl;
	return *this;
}

std::string const &	Character::getName() const {
	return (_name);
}

void	Character::equip(AMateria* m) {
	if (!m)
		return;
	for (int i = 0; i < 4; ++i) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			std::cout<<_name<<" add a materia type '"<<_inventory[i]->getType()\
<<"' at emplacement "<<i<<"in his inventory"<<std::endl;
			break;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && _inventory[idx]) {
		_inventory[idx]->use(target);
	}
}


