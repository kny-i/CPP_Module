//
// Created by 小平波琉 on 2022/08/15.
//

#ifndef CPP_WRONGANIMAL_HPP
#define CPP_WRONGANIMAL_HPP

#include "Animal.hpp"
#include <iostream>

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &rhs);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &rhs);

	const std::string &getType() const;
	void makeSound() const;
protected:
	std::string type;
};

#endif //CPP_WRONGANIMAL_HPP
