/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Implement.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:46:25 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/22 17:20:16 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Implement.hpp"

Base	*generate(void)
{
	std::srand(std::time(NULL));
	int		generator = rand() % 3 + 1;

	if (generator == 1)
		return (new A);
	else if (generator == 2)
		return (new B);
	return (new C);
}

void	identify(Base *p)
{
	std::cout << "Pointer: ";
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	std::cout << "Reference: ";
	try
	{
		Base	&ref = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)ref;
	}
	catch (std::bad_cast &e)
	{
		try
		{
			Base	&ref = dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
			(void)ref;
		}
		catch (std::bad_cast &e)
		{
			std::cout << "C" << std::endl;
		}
	}
}
