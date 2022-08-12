#include "replace.hpp"

Replace::Replace(const std::string &search, const std::string &newWord, std::istream &ifs, std::ostream &ofs)
				: search(search), newWord(newWord), ifs(ifs), ofs(ofs)
{
	std::cout << "Replace constructor called" << std::endl;
}

Replace::~Replace()
{
	std::cout << "Replace destructor called" << std::endl;
}

void Replace::routine()
{
	std::size_t searchLen = search.length();
	std::size_t newWordLen = newWord.length();

	for (std::string buf; std::getline(ifs, buf);)
	{
		std::size_t search_pos = buf.find((search));
		while (search_pos != std::string::npos)
		{
			buf.erase(search_pos, searchLen);
			buf.insert(search_pos, newWord);
			search_pos = buf.find(search, search_pos + newWordLen);
		}
		ofs << buf;
		if (ifs.peek() != EOF)
			ofs << std::endl;
	}
}
