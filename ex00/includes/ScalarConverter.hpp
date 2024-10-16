/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoherna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:05:08 by leoherna          #+#    #+#             */
/*   Updated: 2024/10/17 17:05:08 by leoherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ScalarConverter
{
	private:
		static bool	is_char(const std::string &arg);
		static bool	is_int(const std::string &arg);
		static bool	is_float(const std::string &arg);
		static bool	is_double(const std::string &arg);

		static void	print_char(const std::string &arg);
		static void	print_int(const std::string &arg);
		static void	print_float(const std::string &arg);
		static void	print_double(const std::string &arg);
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter&	operator=(const ScalarConverter &other);
		~ScalarConverter();
		
		static void	convert(std::string arg);
		virtual	void	abstract() = 0;
};
