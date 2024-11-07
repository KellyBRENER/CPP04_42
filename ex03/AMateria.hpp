/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:16:16 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/07 14:43:10 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include <string>

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class	ICharacter;

class AMateria {
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria & src);
		AMateria&	operator=(const AMateria & src);
		virtual ~AMateria();

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

void	delete_AMateria_tab(AMateria** tab);

#endif
