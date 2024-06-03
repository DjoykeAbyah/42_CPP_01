/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/03 16:31:52 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/03 16:58:04 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

class Zombie
{
	private:
		std::string _name = "Horde Leader";

	public:
		Zombie(void);
		Zombie(std::string givenName);
		~Zombie(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif