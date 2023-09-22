/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:46:26 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/22 14:11:16 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Data.hpp"

class Serializer {
	private:
		// Orthodox Canonical Form
		Serializer(void);
		~Serializer(void);
		Serializer(const Serializer &obj);
		Serializer	&operator = (const Serializer &source);

	public:
		// Implemented Methods
		static uintptr_t	serialize(Data *ptr);
		static Data* deserialize(uintptr_t raw);
};
