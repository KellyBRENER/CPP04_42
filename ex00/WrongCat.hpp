/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:47:38 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/04 16:05:01 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "WrongAnimal.hpp"

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& src);
	~WrongCat();
	WrongCat&	operator=(const WrongCat& src);
	void	makeSound() const;
};

#endif
