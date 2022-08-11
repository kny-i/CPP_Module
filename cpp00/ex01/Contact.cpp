#include "Contact.hpp"

Contact::Contact()
		: firstname(""),
		  lastname(""),
		  nickname(""),
		  phone_number(""),
		  darkest_secret(""),
		  isFilled(false) {}

void 			Contact::setFirstName(const std::string str) { firstname = str; }

void 			Contact::setLastName(const std::string str) { lastname = str; }

void 			Contact::setNickname(const std::string str) { nickname = str; }

void 			Contact::setPhoneNumber(const std::string str) { phone_number = str; }

void 			Contact::setDarkestSecret(const std::string str) { darkest_secret = str; }

std::string 	Contact::getFirstName() const { return firstname; }

std::string 	Contact::getLastName() const { return lastname; }

std::string 	Contact::getNickname() const { return nickname; }

std::string 	Contact::getPhoneNumber() const { return phone_number; }

std::string 	Contact::getDarkestSecret() const { return darkest_secret; }

int 			Contact::checkDone() const { return isFilled; }

void 			Contact::done() { isFilled = true; }
