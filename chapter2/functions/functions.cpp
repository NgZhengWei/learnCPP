#include <cstdlib>
#include <iostream>

int getUserInput() // value returning fn must return a val of the type else ther will be undef behaviour
{
    std::cout << "Enter an int: ";
    int userInput{};
    std::cin >> userInput;

    return userInput;
}

int main() // function header - tells compiler about existance of function
{
    // function body - tells compiler what fn does

    int userInput{getUserInput()};

    std::cout << "Double that number is: " << userInput * 2 << ".\n";

    return EXIT_SUCCESS;
}
