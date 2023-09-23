/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:45:11 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/23 14:31:48 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data	*ptr = new Data;
	ptr->str = "ADIL";

	std::cout << ptr->str << std::endl;
	uintptr_t	raw = Serializer::serialize(ptr);
	std::cout << raw << std::endl;
	std::cout << Serializer::deserialize(raw)->str << std::endl;
}
