/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:26:19 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/06 15:34:18 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

class WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& src);
	 virtual ~WrongAnimal();
	WrongAnimal&	operator=(const WrongAnimal& src);
	void	makeSound() const;
	std::string	getType() const;
};

#endif
