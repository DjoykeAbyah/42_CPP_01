/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: djoyke <djoyke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/06 23:02:39 by djoyke        #+#    #+#                 */
/*   Updated: 2024/06/07 22:28:52 by djoyke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>

/**
 * The goal of this exercise is to use pointers to member functions. This is not a
suggestion. Harl has to complain without using a forest of if/else if/else. It doesn’t think
twice!
 */
class Harl
{
    private:
        void debug();
        void info();
        void warning();
        void error();
    
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
};

#endif