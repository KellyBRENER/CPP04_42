/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:49:14 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/05 14:54:45 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "AMateria.hpp"
#include "ICharacter.hpp"

#ifndef CURE_HPP
#define CURE_HPP

class	Cure : public AMateria {
	public :
		Cure();
		Cure(const Cure& src);
		~Cure();
		Cure&	operator=(const Cure& src);

		virtual AMateria*	clone() const;
		virtual void	use(ICharacter& target);
};

#endif
