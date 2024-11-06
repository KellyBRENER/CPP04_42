/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:39:36 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/06 17:39:52 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	ideas = new std::string[100];
	std::cout<<"Brain default constructor called"<<std::endl;
}

Brain::Brain(const Brain& src) {
	ideas = new std::string[100];
	*this = src;
	std::cout<<"Brain copy constructor called"<<std::endl;
}

Brain::~Brain() {
	delete[] ideas;
	std::cout<<"Brain destructor called"<<std::endl;
}

Brain&	Brain::operator=(const Brain& src) {
	std::cout<<"Brain assignation overload called"<<std::endl;
	if (this == &src)
		return *this;
	delete[] ideas;
	ideas = new std::string[100];
	for (int i = 0; i < 100; ++i) {
		ideas[i] = src.ideas[i];
	}
	return (*this);
}

void	Brain::add_idea(const std::string& things) {
	for (int i = 0; i < 100; ++i) {
		if (ideas[i].size() == 0) {
			ideas[i] = things;
			return;
		}
	}
	std::cout<<"ideas is allready full"<<std::endl;
}

std::string&	Brain::getIdea(int idx) const {
	return (ideas[idx]);
}

std::ostream& operator<<(std::ostream& o, const Brain& src) {
	for (int i = 0; i < 100; ++i) {
		if (src.getIdea(i).size() != 0)
		o << src.getIdea(i)<<" ";
	}
	return o;
}
