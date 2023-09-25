/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:03:36 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/25 11:06:58 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "Parse.hpp"

// Orthododx Canonical Form

ScalarConverter::ScalarConverter(void)
{
}

ScalarConverter::~ScalarConverter(void)
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
	(void)obj;
}

ScalarConverter	&ScalarConverter::operator = (const ScalarConverter &source)
{
	(void)source;
	return (*this);
}

// Implemente Method

void	ScalarConverter::convert(std::string form)
{
	char	dataType;

	if (form.empty())
		std::cout << "Error: Invalid Form" << std::endl;
	else
	{
		if (isMaxMin(form))
			printMaxMin(form);
		else if (parseForm(form, dataType))
		{
			if (dataType != 'c')
				printNb(form, dataType);
			else
				printChar(form[1]);
		}
		else
			std::cout << "Error: Invalid Form" << std::endl;
	}
}
