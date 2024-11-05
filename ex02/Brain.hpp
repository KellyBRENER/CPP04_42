/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:18:35 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/05 11:02:50 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "AAnimal.hpp"

#ifndef BRAIN_HPP
#define BRAIN_HPP

class	Brain {
	public:
		std::string*	ideas;
		Brain();
		Brain(const Brain& src);
		~Brain();
		Brain&	operator=(const Brain& src);
};

#endif
