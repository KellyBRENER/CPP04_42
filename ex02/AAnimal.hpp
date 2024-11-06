/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:26:19 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/05 11:01:58 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include <string>

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

class AAnimal {
	protected:
		std::string	type;
	public:
		AAnimal();
		AAnimal(const AAnimal& src);
		virtual ~AAnimal();
		AAnimal&	operator=(const AAnimal& src);
		/*member functions*/
		virtual void	makeSound() const = 0;//cree une methode pure qui rend animal abstrait
		std::string	getType() const;
};

#endif
