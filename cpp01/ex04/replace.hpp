#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

class Replace
{
private:
	std::string s1;
	std::string s2;
	std::istream &cin;
	std::ostream &cout;

public:
	Replace(std::string const &s1, std::string const &s2, std::istream &cin, std::ostream &cout);
	~Replace();

	void replace();
};

#endif