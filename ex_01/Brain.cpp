#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: Default constructor" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain: Copy constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain: = assignment operator" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain: Destructor" << std::endl;
}
