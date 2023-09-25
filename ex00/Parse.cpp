/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parse.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:35:57 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/25 11:07:09 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parse.hpp"

int	parseForm(std::string form, char &dataType)
{
	int		i;

	i = 0;
	if (form.length() == 3 && form[i] == '\'' && form[2] == '\'')
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
			if (form[i] == '.' && form[i + 1] && form[i + 1] != 'f' && dataType == 'i')
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

void	printChar(int nb)
{
	if (nb < 0 || nb > 127)
		std::cout << "char: impossible" << std::endl;
	else if (nb < 32 || nb > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: \'" << static_cast<char>(nb) << "\'" << std::endl;
	std::cout << "int: " << nb << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

static bool	OverUnderFlow(std::string str, char dataType, char typeCheck)
{
	int		Int;
	float	Float;
	double	Double;

	if (dataType == 'f')
		str[str.length() - 1] = '\0';

	std::stringstream	ss(str);

	switch (typeCheck)
	{
		case 'i':
			ss >> Int;
			return (ss.fail());
		case 'f':
			ss >> Float;
			return (ss.fail());
		case 'd':
			ss >> Double;
				return (ss.fail());
		default:
			return (true);
	}
}

void	printNb(std::string str, char dataType)
{
	if (OverUnderFlow(str, dataType, 'i'))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
	}
	else
	{
		if (static_cast<int>(atof(str.c_str())) < 0 || static_cast<int>(atof(str.c_str())) > 127)
			std::cout << "char: impossible" << std::endl;
		else if (static_cast<int>(atof(str.c_str())) < 32 || static_cast<int>(atof(str.c_str())) > 126)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: \'" << static_cast<char>(atof(str.c_str())) << "\'" << std::endl;
		std::cout << "int: " << static_cast<int>(atof(str.c_str())) << std::endl;
	}
	if (dataType != 'i')
	{
		int	len = str.substr(str.find('.')).length() - 1;
		if (dataType == 'f')
			--len;
		std::cout << std::fixed << std::setprecision(len);
	}
	else
		std::cout << std::fixed << std::setprecision(1);
	if (OverUnderFlow(str, dataType, 'f'))
		std::cout << "float: Impossible" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(atof(str.c_str())) << "f" << std::endl;
	if (OverUnderFlow(str, dataType, 'd'))
		std::cout << "double: Impossible" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(atof(str.c_str())) << std::endl;
}
