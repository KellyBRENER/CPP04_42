/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:31:00 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/05 11:35:35 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "AMateria.hpp"

#ifndef ICE_HPP
#define ICE_HPP

class	Ice : public AMateria {
	public :
		Ice();
		Ice(const Ice& src);
		~Ice();
		Ice&	operator=(const Ice& src);

		virtual AMateria*	clone() const;
		virtual void	use(ICharacter& target);
}

#endif
