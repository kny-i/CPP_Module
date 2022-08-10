#ifndef INCLUDE_GUARD_CONTACT_HPP
#define INCLUDE_GUARD_CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:

	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;

	bool isFilled;

public:

	Contact();

	void 			setFirstName(const std::string str) { first_name = str; }
	void 			setLastName(const std::string str) { last_name = str; }
	void 			setNickname(const std::string str) { nick_name = str; }
	void 			setPhoneNumber(const std::string str) { phone_number = str; }
	void 			setDarkestSecret(const std::string str) { darkest_secret = str; }
	std::string 	getFirstName() const { return first_name; }
	std::string 	getLastName() const { return last_name; }
	std::string 	getNickname() const { return nick_name; }
	std::string 	getPhoneNumber() const { return phone_number; }
	std::string 	getDarkestSecret() const { return darkest_secret; }
	int 			checkDone() const { return isFilled; }
	void 			done() { isFilled = true; }
};

#endif
