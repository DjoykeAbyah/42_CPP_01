/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: djoyke <djoyke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/28 22:46:27 by djoyke        #+#    #+#                 */
/*   Updated: 2024/06/03 14:40:39 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
    Zombie zombie("Sally");
	Zombie zombie1;
	randomChump("Stack Zombie");
	Zombie *testZombie = newZombie("Heap Zombie");
	
	zombie.announce(); //non static member function call
	zombie1.announce();
	delete testZombie; //could also call this in the class

	return 0;
}
