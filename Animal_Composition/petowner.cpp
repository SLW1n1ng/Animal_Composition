#include "petowner.h"
#include <iostream>

PetOwner::PetOwner(const std::string& ownerName, const std::string& dogName, const std::string& catName) : ownerName(ownerName), totalFetches(0) {
    dog.setName(dogName);
    cat.setName(catName);
}

void PetOwner::playFetchWithDog(const std::string& item) {
    dog.fetchItemExtended(item);

    totalFetches++;
    if (totalFetches >= 20) {
        std::cout << "The owner needs a break from playing." << std::endl;
        totalFetches = 0;
    }
}

void PetOwner::hearAnimalSound(const Dog& dog) const {
    dog.makeSound();
}

void PetOwner::hearAnimalSound(const Cat& cat) const {
    cat.makeSound();
}

std::string PetOwner::getOwnerName() const {
    return ownerName;
}

std::string PetOwner::getDogName() const {
    return dog.getDogInfo();
}

std::string PetOwner::getCatName() const {
    return cat.getCatInfo();
}
