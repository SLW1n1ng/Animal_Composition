#include <iostream>
#include "cat.h"
#include "dog.h"
#include "fetchTenItems.h"
int main()
{
	Dog dog("Rotweiler", 5);						// Create instance of Dog class
	dog.setName("Rufus");					// set the name of the dog

	Dog copyDog(dog);								// Create a copy object of Dog class
	Dog defaultDog;									// Create instance of default Dog class

	Cat cat("Orange Tabby", 3);						// Create instance of Cat class
	cat.setName("Cookie");							// set the name of the cat
	Cat copyCat(cat);								// Create a copy object of Cat class
	Cat defaultCat;									// Create instance of default Cat class

	std::cout << "Overloaded dog information: \n" << dog.getDogInfo() << std::endl;	// Call the getDogInfo 
	std::cout << "Copy dog information: \n" << copyDog.getDogInfo() << std::endl;	// Call the copy getDogInfo 

	std::cout << "Overloaded cat information: \n" << cat.getCatInfo() << std::endl; // Call the getCatInfo 
	std::cout << "Copy cat information: \n" << copyCat.getCatInfo() << std::endl;	// Call the copy getCatInfo 

	std::cout << "Default dog information:" << defaultDog.getDogInfo() << std::endl;//Display default getDogInfo 
	std::cout << "Default cat information:" << defaultCat.getCatInfo() << std::endl;//Display default getCatInfo

	std::cout << "Dog barking:" << std::endl;
	dog.makeSound();								// Call the makeSound function
	std::cout << "Cat meowing:" << std::endl;
	cat.makeSound();								// Call the meow function

	fetchTenItems(dog);								// fetch Ten Items function

	dog.setName("Old Yeller");						// Update the dog information
	dog.setBreed("Hound");
	dog.setAge(8);

	cat.setName("Garfield");						// Update the cat information
	cat.setColor("Short Hair");
	cat.setAge(22);

	std::cout << "Updated dog information: \n" << dog.getDogInfo() << std::endl;//Display updated getDogInfo
	std::cout << "Updated cat information: \n" << cat.getCatInfo() << std::endl;//Display updated getCatInfo

	return 0;
}



