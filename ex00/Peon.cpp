/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 20:26:54 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/18 20:31:39 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include "Peon.hpp"
#include <string>
#include <iostream>

Peon::Peon(std::string name): Victim(name)
{
    std::cout << "Zog Zog." << std::endl;
}

Peon::Peon(Peon const &other): Victim(other.name)
{
    *this = other;
}

void Peon::operator = (Peon const &other)
{
    this->name = other.name;
    std::cout << "Zog Zog." << std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}
