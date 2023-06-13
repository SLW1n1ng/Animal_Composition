#include "fetchTenItems.h"
#include <iostream>

void fetchTenItems(Dog& dog) // function definition for fetchTenItems
{
	dog.fetchItem("ball");
	dog.fetchItem("stick");
	dog.fetchItem("frisbee");
	dog.fetchItem("toy");
	dog.fetchItem("bone");

	dog.fetchItem("sock");
	dog.fetchItem("shoe");
	dog.fetchItem("towel");
	dog.fetchItem("squeaky toy");
	dog.fetchItem("boomerang"); // This will display "The dog is tired
}
