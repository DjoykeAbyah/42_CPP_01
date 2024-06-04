/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/03 18:53:04 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/04 13:43:59 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

class Weapon
{
	private:
		std::string _type;

	public:
		Weapon(const std::string& givenType);//why in the constructor?
		~Weapon();

		const std::string& getType() const;
		void setType(const std::string givenType);//why const
};

#endif