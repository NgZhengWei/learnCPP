#include <iostream> // pre-processor directive

int main() // without main function this program will fail to link
{
    // VARIABLES
    // a variable is a named object. The name is known formally as identifier
    // type must be defined at compile time
    // variable is instantiated(created and allocated a memory addr) at runtime
    int x; // this is a definition

    x = 5; // this process is called assignment using the assignment opperator =, assign value on right to variable on left. Called copy assignment

    std::cout << "1st x: " << x << std::endl;

    x = 7;

    std::cout << "2nd x: " << x << std::endl;

    // [[maybe_unused]] silences the warning of variable not being used
    [[maybe_unused]] int y = 10; // initialisation. A combination of definition and assignment. the value is called initialiser.

    [[maybe_unused]] int d (4); // direct initialisation. initially introduced for more efficient initialisation but has fallen out of favor as it looks like a fn

    // LISTS INITIALISATION (aka uniform initialisation) - disallows narrowing conversions e.g. double to int cast
    // Favor initialization using braces.
    [[maybe_unused]] int width {5}; // direct list initialisation
    [[maybe_unused]] int height = {6}; // copy list initialisation
    int depth {}; // value initialisation / zero initialisation - depth is assigned value 0

    std::cout << "depth: " << depth << std::endl;

    // SUMMARY
    // int a;         // no initializer (default initialization)
    // int b = 5;     // initializer after equals sign (copy initialization)
    // int c( 6 );    // initializer in parenthesis (direct initialization)

    // List initialization methods (C++11) (preferred)
    // int d { 7 };   // initializer in braces (direct list initialization)
    // int e = { 8 }; // initializer in braces after equals sign (copy list initialization)
    // int f {};      // initializer is empty braces (value initialization)

    // general rule: favour direct list initialisation
    // general rule: use x{0} when using the value and x{} when value will be overwritten
    // general rule: initialise variables on creation unless there is a reason not to for example, trying to optimise for performance etc...

    return 0;
}
