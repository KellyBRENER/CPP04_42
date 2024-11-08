/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:55:51 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/07 13:56:08 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	std::cout<<"***provided tests***\n"<<std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	std::cout<<"***my own tests***\n"<<std::endl;
	Animal**	chenil = new Animal*[10];
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
	std::cout<<"***to test the deep copy***"<<std::endl;
	Dog basil;
	basil.getBrain().add_idea("je mangerais bien un nonos!!!");
	std::cout<<"basic ideas = "<<basil.getBrain()<<std::endl;
	{
	Dog tmp = basil;
	std::cout<<"tmp ideas = "<<tmp.getBrain()<<std::endl;
	}
	std::cout<<"basic ideas = "<<basil.getBrain()<<std::endl;
	return 0;
}

