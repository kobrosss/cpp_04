#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type ("WrongAnimal")
{
	std::cout << "WrongAnimal: Default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal: Copy constructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal: = operator constructor" << std::endl;
	if(this != &other)
		type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal: *generic wrong animal sound*" << std::endl;
}
