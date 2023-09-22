/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parse.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:36:07 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/22 09:48:01 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>

int 	parseForm(std::string form, char &dataType);
bool	isMaxMin(std::string form);
void	printMaxMin(std::string form);
void	printChar(double nb);
void	printNb(double nb, char dataType);
