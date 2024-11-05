/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:08:00 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/05 14:06:10 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Character.hpp"

Character::Character() : _name("unknown") {
	_inventaire = new AMateria*[4];
	for (int i = 0; i < 4; ++i) {
		_inventaire[i] = NULL;
	}
	std::cout<<"Character default constructor called"<<std::endl;
}

Character::Character(const std::string& name) : _name(name) {
	_inventaire = new AMateria*[4];
	for (int i = 0; i < 4; ++i) {
		_inventaire[i] = NULL;
	}
	std::cout<<"Character constructor called"<<std::endl;
}

Character::Character(const Character& src) {
	_name = src.getName();
	_inventaire = new AMateria*[4];
	for (int i = 0; i < 4; ++i) {
		if (src._inventaire[i])
			_inventaire[i] = src._inventaire[i]->clone();
		else
			_inventaire[i] = NULL;
	}
	std::cout<<"Character copy constructor called"<<std::endl;
}

Character::~Character() {
	if (_inventaire) {
		for (int i = 0; i < 4; ++i) {
			if (_inventaire[i])
				delete _inventaire[i];
			else
				break;
		}
		delete[] _inventaire;
	}
	std::cout<<"Character destructor called"<<std::endl;
}

Character&	Character::operator=(const Character& src) {
	std::cout<<"Character assignation overload called"<<std::endl;
	if (this == &src)
		return *this;
	if (_inventaire) {
		for (int i = 0; i < 4; ++i) {
			if (_inventaire[i])
				delete _inventaire[i];
			else
				break;
		}
		delete[] _inventaire;
	}
	_name = src.getName();
	_inventaire = new AMateria*[4];
	for (int i = 0; i < 4; ++i) {
		if (src._inventaire[i])
			_inventaire[i] = src._inventaire[i]->clone();
		else
			_inventaire[i] = NULL;
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
		if (!_inventaire[i]) {
			_inventaire[i] = m;
			std::cout<<_name<<" equip an item type '"<<_inventaire[i].getType()\
<<"' in position "<<i<<" of his inventory."<<std::endl;
			break;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx < 4 && _inventaire[idx])
		_inventaire[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 4 && _inventaire[idx]) {
		_inventaire[idx].use(target);
	}
}


