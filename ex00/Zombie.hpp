/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: djoyke <djoyke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/28 22:48:15 by djoyke        #+#    #+#                 */
/*   Updated: 2024/06/03 16:35:58 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

class Zombie
{
	private:
		std::string _name = "Nameless wierdo"; //member attribute
	
	public:
		Zombie(void);
		Zombie(std::string givenName);
		~Zombie(void);
		
		void announce(void); //member function
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif