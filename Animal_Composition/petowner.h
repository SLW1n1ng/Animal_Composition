#ifndef PETOWNER_H
#define PETOWNER_H

#include <string>
#include "dog.h"
#include "cat.h"

class PetOwner {
private:
    std::string ownerName;
    Dog dog;
    Cat cat;
    int totalFetches;

public:
    PetOwner(const std::string& ownerName, const std::string& dogName, const std::string& catName);
    void playFetchWithDog(const std::string& item);
    void hearAnimalSound(const Dog& dog) const;
    void hearAnimalSound(const Cat& cat) const;
    std::string getOwnerName() const;
    std::string getDogName() const;
    std::string getCatName() const;
};

#endif
