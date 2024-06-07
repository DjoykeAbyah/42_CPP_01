/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: djoyke <djoyke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/06 23:02:43 by djoyke        #+#    #+#                 */
/*   Updated: 2024/06/07 22:46:25 by djoyke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "harl.hpp"

int main()
{
    Harl harl;
    
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");

    return 0;
}