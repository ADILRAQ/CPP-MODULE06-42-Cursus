/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:08:43 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/22 15:44:57 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// TODO: Handle Overflow with Impossible

int	main(int ac, char **av)
{
	if (ac == 2)
		ScalarConverter::convert(av[1]);
	else
		std::cout << "Error: NB of arguments" << std::endl;
	return (0);
}
