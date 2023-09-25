/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parse.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:36:07 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/25 11:07:02 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <sstream>

int 	parseForm(std::string form, char &dataType);
bool	isMaxMin(std::string form);
void	printMaxMin(std::string form);
void	printChar(int nb);
void	printNb(std::string str, char dataType);
