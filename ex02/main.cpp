/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:40:54 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/22 17:23:56 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Implement.hpp"

int	main(void)
{
	Base	*ptr = generate();
	Base	&ref = *ptr;
	identify(ptr);
	identify(ref);
	delete ptr;
}
