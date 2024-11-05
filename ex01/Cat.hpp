/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:47:38 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/05 10:04:54 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Animal.hpp"
#include "Brain.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal
{
	private:
		Brain*	_brain;
public:
	Cat();
	Cat(const Cat& src);
	~Cat();
	Cat&	operator=(const Cat& src);
	/*member functions*/
	virtual void	makeSound() const;
	Brain&	getBrain() const;
};

#endif
