/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoherna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:04:12 by leoherna          #+#    #+#             */
/*   Updated: 2024/10/17 16:04:12 by leoherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(int Value) : value(Value)
{
	//std::cout << "Constructor called" << std::endl;
	return ;
}

Data::~Data()
{
	//std::cout << "Destructor called" << std::endl;
	return ;
}

Data::Data(const Data& copy)
{
	this->value = copy.value;
	//std::cout << "Copy constructor called" << std::endl;
}

Data &Data::operator=(const Data &other)
{
	if (this != &other)
	{
		this->value = other.value;
	}
	return *this;
}