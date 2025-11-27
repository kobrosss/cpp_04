#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "== How it must work ==" << std::endl;

	const Animal *animal = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	std::cout << "\nTypes:" << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

	std::cout << "\nSounds:" << std::endl;
	cat->makeSound();
	dog->makeSound();
	animal->makeSound();

	delete animal;
	delete dog;
	delete cat;

	std::cout << "\n== Mistake of life ==" << std::endl;

	const WrongAnimal *wrong = new WrongCat();
	wrong->makeSound();
	delete wrong;

	std::cout << "\n== Copy Constructor ==" << std::endl;

	Dog basicDog;
	Dog copyDog(basicDog);
	std::cout << "Original type: " << basicDog.getType() << std::endl;
	std::cout << "Copied type:   " << copyDog.getType() << std::endl;

	std::cout << "\n== Assigment operator ==" << std::endl;

	Cat originalCat;
	Cat assignedCat;

	assignedCat = originalCat;
	std::cout << "Original type: " << originalCat.getType() << std::endl;
	std::cout << "Assigned type: " << assignedCat.getType() << std::endl;

	std::cout << "\n== Pointer with Copy ==" << std::endl;

	Animal *a1 = new Dog();
	Animal *a2 = new Dog(*(Dog *)a1);

	a1->makeSound();
	a2->makeSound();
	delete a1;
	delete a2;

	std::cout << "\n== Self Assigment ==" << std::endl;

	Dog selfDog;
	selfDog = selfDog;

	return 0;
}
