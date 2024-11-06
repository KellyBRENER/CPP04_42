/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:18:35 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/06 17:39:18 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef BRAIN_HPP
#define BRAIN_HPP

class	Brain {
	private:
		std::string*	ideas;
	public:
		Brain();
		Brain(const Brain& src);
		~Brain();
		Brain&	operator=(const Brain& src);
		void	add_idea(const std::string& things);
		std::string&	getIdea(int idx) const;
};

std::ostream& operator<<(std::ostream& o, const Brain& src);

#endif
