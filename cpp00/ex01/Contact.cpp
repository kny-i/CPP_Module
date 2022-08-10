#include "Contact.hpp"

Contact::Contact()
		: first_name(""),
		  last_name(""),
		  nick_name(""),
		  phone_number(""),
		  darkest_secret(""),
		  isFilled(false) {}

void 			Contact::setFirstName(const std::string str) { first_name = str; }

void 			Contact::setLastName(const std::string str) { last_name = str; }

void 			Contact::setNickname(const std::string str) { nick_name = str; }

void 			Contact::setPhoneNumber(const std::string str) { phone_number = str; }

void 			Contact::setDarkestSecret(const std::string str) { darkest_secret = str; }

std::string 	Contact::getFirstName() const { return first_name; }

std::string 	Contact::getLastName() const { return last_name; }

std::string 	Contact::getNickname() const { return nick_name; }

std::string 	Contact::getPhoneNumber() const { return phone_number; }

std::string 	Contact::getDarkestSecret() const { return darkest_secret; }

int 			Contact::checkDone() const { return isFilled; }

void 			Contact::done() { isFilled = true; }
