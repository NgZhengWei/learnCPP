#include <iostream>

// global namespace only accepts declarations and definition statements
// - no other statements like expression statements (e.g. 2 + 3)

// void a() // example of name collision with fn in a.cpp during linkage
// {
//     std::cout << "a in main is called\n";
// }

// int x; // highly discouraged to put this in global namespace
// x = 5; // expression not allowed in global namespace

// not recommended to use directives
using namespace std; // this is a using directive - allows us to access names in namespace without namespace prefix

// this fn now collides with std cout
// int cout()
// {
//     return 5;
// }

void printName();

int main()
{
    // :: is called the scope resolution operator
    // when namespace prefix is included, the identifier is called a qualified name
    // std::cout << "main is called\n";

    cout << "main is called\n"; // this works with use of directive

    printName();

#ifndef JOHN
    std::cout << "Preprocessor directive, object like macro JOHN not defined in"
                 " this file but is in preprocessorDirectives file\n ";
#endif

    return 0;
}
