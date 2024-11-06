/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:26:19 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/06 16:47:33 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
protected:
	std::string	type;
public:
	Animal();
	Animal(const Animal& src);
	virtual ~Animal();
	Animal&	operator=(const Animal& src);
	/*member function*/
	virtual void	makeSound() const;
	std::string		getType() const;
};

#endif
