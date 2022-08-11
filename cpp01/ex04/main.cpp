#include "replace.hpp"

int main(int argc, char **argv)
{
	std::string filename;
	std::string search;
	std::string relpace;
	std::string buf;
	std::ifstream ifs;
	std::ofstream ofs;

	try
	{
		if (argc != 4)
			throw std::exception();
		filename = argv[1];
		ifs.open(filename);
		if (!ifs)
		{
			std::cerr << "can't open " << filename << std::endl;
			throw std::exception();
		}
		ofs.open(filename + ".replace", std::ios::out | std::ios::trunc );
		if (!ofs)
		{
			std::cerr << "can't open " << filename << ".replace" << std::endl;
			throw std::exception();
		}



	}
	catch (std::exception &e)
	{
		std::cout << "Error" << std::endl;
		std::exit(1);
	}
}