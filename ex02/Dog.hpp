/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:46:24 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/06 17:00:51 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public AAnimal {
	private:
		Brain*	_brain;
	public:
		Dog();
		Dog(const Dog& src);
		~Dog();
		Dog&	operator=(const Dog& src);
		/*member functions*/
		virtual void	makeSound() const;
		Brain&	getBrain() const;
};

#endif
