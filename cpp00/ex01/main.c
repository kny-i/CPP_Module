#include "PhoneBook.hpp"

int main(void) {
	PhoneBook phoneBook;
	int instructionNumber;

	while (1) {
		std::cout << std::endl << "****************[menu]****************" << std::endl;
		std::cout << "input instruction (1.ADD, 2.SEARCH, 3.EXIT, (4.VIEW)) > ";
		std::cin >> instructionNumber;

		switch (instructionNumber) {
			case 1 : {
				//phoneBook.executeAdd();
				printf("__test__0\n");
				break;
			}
			case 2 : {
				//phoneBook.executeSearch();
				printf("__test__01\n");
				break;
			}
			case 3 :
				exit(0);
			case 4 : {
				printf("__test__02\n");
				//phoneBook.executeShowList();
				break;
			}
			default : {
				std::cout << "invalid input!" << std::endl;
			}
		}
	}
}