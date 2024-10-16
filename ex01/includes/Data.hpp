/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoherna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:03:53 by leoherna          #+#    #+#             */
/*   Updated: 2024/10/17 16:03:53 by leoherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Data
{
	public:

		int value;
		Data(int Value);
		~Data();

		Data(const Data& copy);
		Data &operator=(const Data &other);
};
