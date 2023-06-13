#ifndef DOG_H
#define DOG_H
#include <string>
#include "animal.h"

class Dog {												//Dog class inherits from Animal class
private:												//Member variables
	Animal animal;
	std::string breed;
	int age;
	int fetchCount;

public:
	Dog();												//default constructor
	Dog(std::string breed, int age);					//overload constructor prototype 
	~Dog();												//destructor prototype
	Dog(const Dog& copy);								//copy constructor

	std::string getBreed() const;						//get prototypes for breed
	int getAge() const;									//get prototypes for age

	void setBreed(std::string breed);					//set prototypes for breed
	void setAge(int age);								//set prototypes for age

	void setName(std::string name);						// New function to set the name

	void makeSound() const;								//Member functions prototypes for makeSound
	void fetchItem(const std::string& item);			//Member functions prototypes for fetchItem

	void fetchItemExtended(const std::string& item);	//Member functions prototypes for fetchItemExtended

	std::string getDogInfo() const;						//Member functions prototypes for getDogInfo

};

#endif // !DOG_H
