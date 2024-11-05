/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:13:04 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/05 15:29:59 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "IMateriaSource.hpp"

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

class MateriaSource : public IMateriaSource {
	private:
		AMateria**	_stock;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& src);
		virtual ~MateriaSource();
		MateriaSource&	operator=(const MateriaSource& src);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif
