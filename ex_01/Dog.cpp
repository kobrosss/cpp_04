#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog: Default constructor" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog: Copy constructor" << std::endl;
	brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog: Copy assignment" << std::endl;

	if (this != &other)
	{
		Animal::operator=(other);

		delete brain;
		brain = new Brain(*other.brain);
	}

	return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog: Destructor" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog: Woof! Woof!" << std::endl;
}
