#include <iostream>

// DECLARATIONS
// forward declaration for a function aka function declaration
// return type, identifier, parameters (param name optional but best practive to include)
// used a lot for functions declared in a different code file
int sum(int x, int y);

int main()
{
    // scope is a compile time property
    // an identifier is in scope when it can be referenced
    int num{sum(1, 2)}; // num here is in local scope

    std::cout << "Sum is " << num << '\n';

    return 0;
}

int sum(int x, int y) // x and y are initialised here
{
    // lifetime of variable is time from creation to destruction during runtime
    // lifetime is a runtime property
    // best practice: define loval vars as close to their first use as possible
    int z{x + y}; // z is initialised here at point of var definition

    return z;
} // variables are destroyed in reverse order to creation - z, y then x
  // note: the order for creation and destruction is a guarantee but compilers
  // have the flexibility to change this for optimisation purposes

// DECLARATIONS VS DEFINITIONS
// declaration is when you announce to the compiler about the existance of an
// identifier and its type
// definition is a declaration that actually implements or instantiates the
// identifier
// note: all definitions are declarations
