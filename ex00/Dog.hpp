/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:46:24 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/06 16:44:50 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& src);
		~Dog();
		Dog&	operator=(const Dog& src);
		/*member function*/
		virtual void	makeSound() const;
};

#endif
