/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:47:46 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/22 14:05:54 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// Orthodox Canonical Form

Serializer::Serializer(void)
{
}

Serializer::~Serializer(void)
{
}

Serializer::Serializer(const Serializer &obj)
{
	(void)obj;
}

Serializer	&Serializer::operator = (const Serializer &source)
{
	(void)source;
	return (*this);
}

// Implemented Methods

uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
