/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:55:51 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/07 14:04:53 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	/*tesnon instanciable class :*/
	//AAnimal	animal;
	std::cout<<"***provided tests***\n"<<std::endl;
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	std::cout<<"***my own tests***\n"<<std::endl;
	AAnimal**	chenil = new AAnimal*[10];
	for (int i = 0; i < 10; ++i) {
		if (i % 2)
			chenil[i] = new Dog();
		else
			chenil[i] = new Cat();
	}
	for (int i = 0; i < 10; ++i) {
		chenil[i]->makeSound();
		delete chenil[i];
	}
	delete[] chenil;
	return 0;
}

