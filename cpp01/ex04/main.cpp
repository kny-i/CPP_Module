#include "replace.hpp"

int main(int argc, char **argv)
{
	std::string filename;
	std::string search;
	std::string newWord;
	std::ifstream ifs;
	std::ofstream ofs;

	try
	{
		if (argc != 4 || argv[2][0] == '\0')
			throw std::exception();
		filename = argv[1];
		ifs.open(filename);
		if (!ifs)
		{
			std::cerr << "can't open " << filename << std::endl;
			throw std::exception();
		}
		ofs.open(filename + ".replace", std::ios::out);
		if (!ofs)
		{
			std::cerr << "can't open " << filename << ".replace" << std::endl;
			throw std::exception();
		}
		search = argv[2];
		newWord = argv[3];
		Replace replace(search, newWord, ifs, ofs);
		replace.routine();
		ofs.close();
		ifs.close();
	}
	catch (std::exception &e)
	{
		std::cout << "Error" << std::endl;
		std::exit(1);
	}
}
