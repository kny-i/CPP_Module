#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

class Replace
{
private:
	std::string search;
	std::string newWord;
	std::istream &ifs;
	std::ostream &ofs;

public:
	Replace(const std::string &search, const std::string &newWord, std::istream &ifs, std::ostream &ofs);
	~Replace();

	void routine();
};

#endif
