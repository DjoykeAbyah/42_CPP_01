/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/04 18:16:12 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/05 16:18:30 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

//check for if word is longer than original
//what if replace word with same word? //dont do anything and just give error message
//what if the words are NULL?
//https://www.geeksforgeeks.org/cin-in-c/
//https://www.geeksforgeeks.org/how-to-read-from-a-file-in-cpp/
//https://github.com/arommers/CPP_Modules/tree/master/01/ex04
//https://cdn.intra.42.fr/pdf/pdf/121208/en.subject.pdf
//https://chatgpt.com/c/a46ad439-1000-4f40-97c4-8c9181fddff3


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
	
	std::ofstream outFile("output.txt"); //add blabla.replace
	if (!outFile)
	{
		std::cerr << "unable to open outfile" << std::endl; //ad blabla.replace
		return 1;
	}
	
	//read from the infile put in outfile
	std::string input;
	while (std::getline(inFile, input))
	{
		size_t position = input.find(word);
		if (position != std::string::npos)
			std::cout << "Found the word" << std::endl;
		outFile << input << std::endl;
	}
	
	inFile.close();
	outFile.close();
	return 0;
}