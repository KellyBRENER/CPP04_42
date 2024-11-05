/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:41:04 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/05 14:42:36 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "AMateria.hpp"

void	delete_AMateria_tab(AMateria** tab) {
	if (tab) {
		for (int i = 0; i < 4; ++i) {
			if (tab[i]) {
				delete tab[i];
				tab[i] = NULL;
			}
		}
		delete[] tab;
		tab = NULL;
	}
}
