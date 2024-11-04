/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:47:38 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/04 16:05:01 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Animal.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat& src);
	~Cat();
	Cat&	operator=(const Cat& src);
	virtual void	makeSound() const;
};

#endif
