// PROCESS OF TRANSLATION (lookup: translation phases)
// - preprocess code files into translation units -> compile translation units -> linking

// preprocessor looks through code files to search for preprocessor directives
// - starts with # and ends in newline e.g. #include <iostream>
// - performs certain text manupulation tasks
// - has its own syntax (differing from C++)

// preprocessor replaces this with contents of iostream file and then
// also preprocesses those contents, resulting in recursive inclusion of content
#include <iostream>

// this is a macro it goes identifier and sub_text
#define NAME "Ray" // legacy code, not best practice

#define JOHN // macros do not replace identifiers in other preprocessor directives
#define BOB  // is only defined until end of this file, does not affect other files
// scope logic does not apply as it is processed before compilation

void printName()
{
    std::cout << "My name is: " << NAME << '\n';

#ifdef BOB // conditional compilation based on preprocessor deriectives
    std::cout << "Bob is here!" << '\n';
#endif

#ifdef JOHN
    std::cout << "John is here!" << '\n';
#endif

#ifndef JOHN
    std::cout << "John aint here" << '\n';
#endif

#if 0 // code in this block will not be compiled
adwfesfsef
#endif
}
