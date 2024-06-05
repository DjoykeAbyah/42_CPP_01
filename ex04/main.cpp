/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/04 18:16:12 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/05 15:51:11 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

//check for if word is longer than original
//what if replace word with same word? //dont do anything and just give error message
//what if the words are NULL?

int main()
{
	std::string filename;
	std::string word;
	std::string replaceWord;

	std::cout << "Enter filename, word, and word to replace with" << std::endl;

	std::cin >> filename >> word >> replaceWord;

	std::cout << "Filename = " << filename << std::endl;
	std::cout << "word = " << word << std::endl;
	std::cout << "word to replace with = " << replaceWord << std::endl;

	std::ifstream inFile(filename);
	if (!inFile)
	{
		std::cerr << "cant open this file" << filename << std::endl;
		return 1;
	}
	std::cout << "file opened sucessfully" << std::endl;
	
	std::ofstream outFile("output.txt");
	if (!outFile)
	{
		std::cerr << "unable to open outfile" << std::endl;
		return 1;
	}
	inFile.close();
	outFile.close();
	return 0;
}