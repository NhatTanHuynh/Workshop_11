#include <iostream>
#include "Animal.h"
#include "Tiger.h"
#include "Squirrel.h"

using namespace std;

int main() {
    // Create a generic animal using a pointer to Animal
    Animal* a = new Animal("Generic", "Animal");
    a->sleep();  // Expected: The generic animal sleeps... generically?

    // Create a Tiger and call sleep
    Tiger* t = new Tiger("Sheru");
    t->sleep();  // Expected: The tiger snores loudly as it sleeps.

    // Create a Squirrel and call sleep
    Squirrel* s = new Squirrel("Chippy");
    s->sleep();  // Expected: The squirrel sleeps silently...

    // Clean up
    delete a;
    delete t;
    delete s;

    return 0;
}
