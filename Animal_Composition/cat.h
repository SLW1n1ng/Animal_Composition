#ifndef CAT_H
#define CAT_H
#include <string>
#include "animal.h"

class Cat {								//Cat class
private:								//Member variables
	Animal animal;						//Animal object
	std::string color;
	int age;

public:
	Cat();								//default constructor
	Cat(std::string color, int age);	//constructor prototype
	~Cat();								//destructor prototype
	Cat(const Cat& copy);				//copy constructor

	const std::string getColor() const;	//get prototypes for color
	int getAge();						//get prototypes for age

	void setColor(const std::string& color);	//set prototypes for color
	void setAge(const int& age);				//set prototypes for age

	void setName(std::string name);		// New function to set the name

	void makeSound() const;				//Member functions prototypes for makeSound
	std::string getCatInfo() const;		//Member functions prototypes for getCatInfo
};
#endif // CAT_H
