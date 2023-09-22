/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parse.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:35:57 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/22 09:50:41 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parse.hpp"

int	parseForm(std::string form, char &dataType)
{
	int		i;

	i = 0;
	if (form.length() == 3 && form[i] == '\'' && form[2] == '\'' && !form[3])
		return (dataType = 'c', 1);
	if (((form [i] == '+' || form[i] == '-') && form[i + 1]) || isdigit(form[i]))
	{
		if (form[i] == '+' || form[i] == '-')
			i++;
	}
	else
		return (0);
	dataType = 'i';
	while (form[i])
	{
		if (!isdigit(form[i]))
		{
			if (form[i] == '.' && form[i + 1] && dataType == 'i')
				dataType = 'd';
			else if (form[i] == 'f' && !form[i + 1] && dataType == 'd')
				dataType = 'f';
			else
			{
				dataType = '\0';
				break ;
			}
		}
		i++;
	}
	return (dataType != '\0' ? 1 : 0);
}

bool	isMaxMin(std::string form)
{
	if (form == "-inff" || form == "+inff" || form == "-inf" || form == "+inf"
		|| form == "nanf" || form == "nan")
		return (true);
	return (false);
}

void	printMaxMin(std::string form)
{
	std::string	result;

	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	result = (form[0] == '+') ? "+inf"
			: (form[0] == '-') ? "-inf"
			: "nan";
	std::cout << "float: " << result + 'f' << std::endl;
	std::cout << "double: " << result << std::endl;
}

void	printChar(double nb)
{
	char		c = static_cast<char>(nb);

	if (!isascii(c))
	std::cout << "char: impossible" << std::endl;
	else if (!isprint(c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: \'" << c << "\'" << std::endl;
}

void	printNb(double nb, char dataType)
{
	int		Int = static_cast<int>(nb);
	float	Float = static_cast<float>(nb);

	if (dataType == 'i' || dataType == 'c')
		std::cout << std::fixed << std::setprecision(1);
	std::cout << "int: " << Int << std::endl;
	std::cout << "float: " << Float << "f" << std::endl;
	std::cout << "double: " << nb << std::endl;
}
