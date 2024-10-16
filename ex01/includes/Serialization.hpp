/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoherna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:46:57 by leoherna          #+#    #+#             */
/*   Updated: 2024/10/17 15:46:57 by leoherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Data.hpp"
#include <stdint.h>

class Serialization
{
	private:
		/* data */
	public:
		Serialization(/* args */);
		~Serialization();

		Serialization(const Serialization& copy);
		Serialization &operator=(const Serialization &other);
		/*----end of construction----*/

		static uintptr_t			serialize(Data* ptr);
		static Data					*deserialize(uintptr_t raw);
		virtual void				instance(void) = 0;

};
