/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoherna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:48:32 by leoherna          #+#    #+#             */
/*   Updated: 2024/10/17 15:48:32 by leoherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization()
{
	//std::cout << "Constructor called" << std::endl;
	return ;
}

Serialization::~Serialization()
{
	//std::cout << "Destructor called" << std::endl;
	return ;
}

Serialization::Serialization(const Serialization& copy)
{
	(void)copy;
	//std::cout << "Copy constructor called" << std::endl;
}

Serialization &Serialization::operator=(const Serialization &other)
{
	(void)other;
	return *this;
}

/*---end of constructor---*/

uintptr_t Serialization::serialize(Data* ptr)
{
	uintptr_t serializedPtr = reinterpret_cast<uintptr_t>(ptr);
	return serializedPtr;
}

Data	 *Serialization::deserialize(uintptr_t raw)
{
	Data *deserializedPtr = reinterpret_cast<Data*>(raw);
	return deserializedPtr;
}
