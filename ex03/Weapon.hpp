/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/03 18:53:04 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/03 19:21:06 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

class Weapon
{
	private:
		std::string _type;

	public:
		Weapon();
		~Weapon();

		const std::string& getType() const;
		void setType(std::string givenType);
};

#endif