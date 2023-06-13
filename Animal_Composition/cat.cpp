#include "cat.h"
#include <iostream>

Cat::Cat() : color("Any cat color"), age(0) {}							// default constructor implementation
Cat::Cat(std::string color, int age) : animal(), color(color), age(age) { animal.setSound("Meow!\n"); }	// constructor
Cat::~Cat() { std::cout << "Meeeowr!!..." << std::endl; }							//destructor implementation
Cat::Cat(const Cat& copy) : animal(copy.animal), color(copy.color), age(copy.age) {}	// copy cat constructor 

const std::string Cat::getColor() const { return color; }						// get functions for color
int Cat::getAge() { return age; }									// get functions for  age 

void Cat::setColor(const std::string& color) { this->color = color; }// set functions for color
void Cat::setAge(const int& age) { if (age < 30 && age > 0) { this->age = age; } else { this->age = 0; } }// set for age

void Cat::setName(std::string name) { animal.setName(name); }		// Implementation of the setName function

void Cat::makeSound() const { animal.makeSound(); }					// pure virtual function for makeSound

std::string Cat::getCatInfo() const {								// getCatInfo implementation
	return "Name: " + animal.getName() + "\nColor: " + color + "\nAge: " + std::to_string(age) + "\n";
}