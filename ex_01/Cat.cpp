#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat: Default constructor" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat: Copy constructor" << std::endl;
	brain = new Brain(*other.brain);
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat: Copy assignment" << std::endl;

	if (this != &other)
	{
		Animal::operator=(other);

		delete brain;
		brain = new Brain(*other.brain);
	}

	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat: Destructor" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat: Meow! Meow!" << std::endl;
}
