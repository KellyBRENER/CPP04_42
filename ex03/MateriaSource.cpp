/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:16:13 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/05 16:18:29 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	_stock = new AMateria*[4];
	for (int i = 0; i < 4; ++i) {
		_stock[i] = NULL;
	}
	std::cout<<"MateriaSource default constructor called"<<std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& src) {
	_stock = new AMateria*[4];
	for (int i = 0; i < 4; ++i) {
		if (src._stock[i]) {
			_stock[i] = src._stock[i]->clone();
		}
		else
			_stock[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	delete_AMateria_tab(_stock);
	std::cout<<"MateriaSource destructor called"<<std::endl;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& src) {
	if (this == &src)
		return *this;
	delete_AMateria_tab(this->_stock);
	_stock = new AMateria*[4];
	for (int i = 0; i < 4; ++i) {
		if (src._stock[i]) {
			_stock[i] = src._stock[i]->clone();
		}
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; ++i) {
		if (_stock[i] == NULL) {
			_stock[i] = m;
			break;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; ++i) {
		if (_stock[i] && _stock[i]->getType() == type) {
			return (_stock[i]->clone());
		}
	}
	return 0;
}
