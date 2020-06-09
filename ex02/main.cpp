/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: abobas <abobas@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/06 23:47:34 by abobas        #+#    #+#                 */
/*   Updated: 2020/06/09 11:27:34 by abobas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <iostream>

void	LateToTheParty()
{
	Zombie		*LaterToTheParty;
	ZombieEvent	LateToThePartyTwo;
	
	std::cout << "\nTwo roaming zombies appear...\n" << std::endl;
	usleep(1000 * 1000);
	Zombie LateToTheParty(std::string("Rotten Corpse"), std::string("Slow Zombie"));
	LateToTheParty.announce();
	LateToThePartyTwo.setZombieType("Rotten Corpse");
	LaterToTheParty = LateToThePartyTwo.newZombie("Super Slow Zombie");
	LaterToTheParty->announce();
	usleep(1000 * 1000);
	std::cout << "\nThe zombies start eating the remains of the starved horde\n" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		LateToTheParty.announce("* MUNCHING ON FLESH AND BONES *");
		LaterToTheParty->announce("* CRUNCHING ON FLESH AND BONES *");
		usleep(1000 * 1000);
	}
	std::cout << "\nA loud missile draws the attention of the eating zombies..." << std::endl;
	usleep(1000 * 1000);
	std::cout << "\n* A HUGE BLAST OBLITERATES EVERYTHING WITHIN A 5 KM RADIUS *\n" << std::endl;
	delete LaterToTheParty;
}

void	StarvingHorde(int amount)
{
	ZombieEvent		StarvingHorde;
	Zombie			*Horde[amount];
	
	std::cout << "\nA zombie horde approaches...\n" << std::endl;
	for (int i = 0; i < amount; i++)
	{
		Horde[i] = StarvingHorde.RandomChump("Rotten Corpse");
		usleep(1000 * 1000);
	}
	std::cout << "\nThere is no one to feed upon and the horde starves\n" << std::endl;
	for (int i = 0; i < amount; i++)
	{
		delete Horde[i];
		usleep(1000 * 1000);
	}
	usleep(1000 * 1000);
}

int		main()
{
	srand(time(0));
	StarvingHorde(8);
	LateToTheParty();
	return (0);
}
