/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/04 18:16:12 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/06 21:29:34 by djoyke        ########   odam.nl         */
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

	if (word == replaceWord)
	{
		std::cerr << "a bit useless don't you think?" << std::endl;
		return 1;
	}

	std::ifstream inFile(filename);
	if (!inFile)
	{
		std::cerr << "cant open this infile" << filename << std::endl;
		return 1;
	}
	std::cout << "infile opened sucessfully" << std::endl;
	
	std::ofstream outFile("output.txt");
	if (!outFile)
	{
		std::cerr << "unable to open outfile" << std::endl;
		return 1;
	}
	std::cout << "outfile opened sucessfully" << std::endl;
	
	//read from the infile put in outfile
	std::string readLine;
	while (std::getline(inFile, readLine))
	{
		size_t position = readLine.find(word);
		while (position != std::string::npos)
		{
			readLine = readLine.substr(0, position) + replaceWord + readLine.substr(position + word.length());
			position++;
			position = readLine.find(word, position + replaceWord.length());
		}
		outFile << readLine << std::endl;
	}
	inFile.close();
	outFile.close();
	return 0;
}