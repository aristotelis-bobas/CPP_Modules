/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 19:58:21 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/21 14:51:20 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Victim.hpp"
#include <string>
#include <ostream>

class Sorcerer
{
    private:
        std::string name;
        std::string title;
    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer(Sorcerer const &other);
		Sorcerer& operator = (Sorcerer const &other);
        std::string getName() const;
        std::string getTitle() const;
        void polymorph(Victim const &target);
        virtual ~Sorcerer();
};

std::ostream& operator << (std::ostream &out, Sorcerer const &src);

#endif
