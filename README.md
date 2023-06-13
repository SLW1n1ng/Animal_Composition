# Animal_Composition
Composition Animal, Dog, and Cat Classes

This repository contains the implementation of composition-based Animal,
Dog, and Cat classes in C++. The Animal class serves as a base class, 
while the Dog and Cat classes are derived classes that make use of 
composition to include an instance of the Animal class.

Animal Class:
- The Animal class represents an animal with basic properties 
such as a name and a sound.
- The class includes functions to set and get the animal's name.
- It also includes a pure virtual function, makeSound(),
which is meant to be overridden by the derived classes.

Dog Class:
- The Dog class is a derived class of the Animal class, 
using composition to include an Animal instance.
- It adds additional properties specific to dogs, such as breed, age, 
and a fetchCount to track the number of items fetched.
- The class includes functions to set and get the dog's breed and age.
- It overrides the makeSound() function to make a dog-specific sound.
- It also includes a fetchItem() function to simulate a dog fetching 
an item, which increments the fetchCount and updates the dog's name accordingly.
- The getDogInfo() function returns a formatted string with information 
about the dog, including its name, breed, and age.

Cat Class:
- The Cat class is also a derived class of the Animal class using composition.
- It includes properties specific to cats, such as color and age.
- The class includes functions to set and get the cat's color and age.
- It overrides the makeSound() function to make a cat-specific sound.
- The getCatInfo() function returns a formatted string with information
about the cat, including its name, color, and age.
- It also includes a setName() function to set the name of the cat, which
internally calls the corresponding function in the Animal class.

Usage:
1. Include the necessary header files: `animal.h`, `dog.h`, and `cat.h`.
2. Create instances of the Dog and Cat classes, providing the required parameters.
3. Use the provided member functions to interact with the objects, such as
setting the name, breed, age, and color, as well as making sounds and fetching items.
4. Retrieve information about the objects using the get functions and display it as needed.


