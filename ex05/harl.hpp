/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: djoyke <djoyke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/06 23:02:39 by djoyke        #+#    #+#                 */
/*   Updated: 2024/06/06 23:09:03 by djoyke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

/**
 * The goal of this exercise is to use pointers to member functions. This is not a
suggestion. Harl has to complain without using a forest of if/else if/else. It doesn’t think
twice!
 */
class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    
    public:
        void complain(std::string level);
};

#endif