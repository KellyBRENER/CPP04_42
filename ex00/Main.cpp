/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:55:51 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/06 17:10:20 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
/*avec methode*/
std::cout<<"***utilisation de fonction virtual ou methode***\n"<<std::endl;
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
delete meta;
delete j;
delete i;
/*sans methode*/
std::cout<<"***sans fonction virtual ou methode***\n"<<std::endl;
const WrongAnimal* wrongmeta = new WrongAnimal();
const WrongAnimal* wrongj = new WrongCat();
const WrongCat wrongi;
std::cout << wrongj->getType() << " " << std::endl;
std::cout << wrongi.getType() << " " << std::endl;
std::cout << wrongmeta->getType() << " " << std::endl;
wrongj->makeSound();
wrongi.makeSound();
wrongmeta->makeSound();
delete wrongj;
delete wrongmeta;
return 0;
}

