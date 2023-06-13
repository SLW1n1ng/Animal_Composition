#include <iostream>
#include "dog.h"

Dog::Dog() : breed("Any dog breed "), age(0) { fetchCount = 0; }			// default constructor 

Dog::Dog(std::string breed, int age) : animal(), breed(breed), age(age) {   // overload constructor
    animal.setSound("Woof!");											   // set sound to "Woof!"
    fetchCount = 0;
}
Dog::~Dog() {}					                                            // destructor implementation
Dog::Dog(const Dog& copy) : animal(copy.animal), breed(copy.breed), age(copy.age), fetchCount(0) {}

std::string Dog::getBreed() const { return breed; }                         // get prototypes for breed
int Dog::getAge() const { return age; }										// get prototypes for age

void Dog::setBreed(std::string breed) { this->breed = breed; }				// set prototypes for breed
void Dog::setAge(int age) { if (age < 30 && age > 0) { this->age = age; } else { this->age = 0; } } // set prototypes for age

void Dog::setName(std::string name) { animal.setName(name); }               // Implementation of the setName function

void Dog::makeSound() const { animal.makeSound(); }                         // function for makeSound
void Dog::fetchItem(const std::string& item) {                              // prototypes for fetchItem
    fetchCount++;                                                           // increment fetchCount
    if (fetchCount >= 10) {													// if fetchCount is greater than or equal to 10
        animal.setName(" fetched the " + item);								        // append " fetched " + item to name
        std::cout << "fetchCount = " << fetchCount << ". " << animal.getName() << ". The dog is tired.\n" << std::endl;
        fetchCount = 0;	                                                    // reset fetchCount to 0
        return;
    }
    std::cout << "fetchCount = " << fetchCount << "." << animal.getName() << " fetched the " << item << std::endl;

}
void Dog::fetchItemExtended(const std::string& item) {
    fetchCount++;
    if (fetchCount >= 20) {
        std::cout << "fetchCount = " << fetchCount << ". " << "The dog fetched the " << item << ". The dog is tired." << std::endl;
        fetchCount = 0;
    }
    else {
        std::cout << "fetchCount = " << fetchCount << ". " << "The dog fetched the " << item;
    }
}

std::string Dog::getDogInfo() const {                                           // getDogInfo implementation
    return "Name: " + animal.getName() + "\nBreed: " + breed + "\nAge: " + std::to_string(age) + "\n";
}
