/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoherna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:47:52 by leoherna          #+#    #+#             */
/*   Updated: 2024/10/17 15:47:52 by leoherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"
#include <iostream>

int main()
{
	Data* monPointeur = new Data(90); /* un pointeur vers quelque chose */;
	std::cout << "value : " << monPointeur->value << std::endl;


	uintptr_t entierDePointeur = Serialization::serialize(monPointeur);

	Data* pointeurOriginal = Serialization::deserialize(entierDePointeur);
	std::cout << "value : " << pointeurOriginal->value << std::endl;

}