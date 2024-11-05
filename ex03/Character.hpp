/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:03:27 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/05 13:40:28 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ICharacter.hpp"

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class	Character : public ICharacter {
	protected:
		std::string	_name;
		AMateria**	_inventaire;
	public :
		Character();
		Character(const std::string& name);
		Character(const Character& src);
		~Character();
		Character&	operator=(const Character& src);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif
