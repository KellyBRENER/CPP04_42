/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:10:19 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/05 15:32:42 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "AMateria.hpp"

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

class IMateriaSource {
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
