/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoherna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:58:35 by leoherna          #+#    #+#             */
/*   Updated: 2024/10/17 11:58:35 by leoherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "thats too much bro" << std::endl;
	else
	{
		std::string	arg(av[1]);
		ScalarConverter::convert(arg);
	}
}
