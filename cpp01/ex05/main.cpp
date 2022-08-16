#include "Harl.hpp"

void test(std::string level)
{
	Harl Harl;


	std::cout << level << std::endl;
	Harl.complain(level);
	std::cout << std::endl;
}

int main()
{
	test("DEBUG");
	test("INFO");
	test("WARNING");
	test("ERROR");
	test("HOGE");
	test("");
}
