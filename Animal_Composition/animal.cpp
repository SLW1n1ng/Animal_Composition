#include "animal.h"
#include <iostream>

Animal::Animal() : sound("Undefined sound"), name("No name") {}		//default constructor
Animal::Animal(const std::string& name) : name(name) {}				// constructor
Animal::~Animal() {}												// destructor

const std::string& Animal::getName() const { return name; }			// get function for name
void Animal::setName(const std::string& name) { this->name = name; }// set function for name

void Animal::setSound(const std::string& sound) { this->sound = sound; }// New function to set the sound
void Animal::makeSound() const { std::cout << sound << std::endl; }	// pure virtual function
