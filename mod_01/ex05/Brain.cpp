/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/07 20:25:50 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/09 17:17:33 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>
#include <sstream>

Brain::Brain()
{
	
}

std::string		Brain::identify() const
{
	std::stringstream	string;
	long address = (long)this;
	string << "0x" << std::uppercase << std::hex << address;
	return (string.str());
}
