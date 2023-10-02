#include <iostream>

int main()
{
    int firstUserInput{};
    int secondUserInput{};

    std::cout << "Enter an integer: ";
    std::cin >> firstUserInput;

    std::cout << "Enter another integer: ";
    std::cin >> secondUserInput;

    std::cout << firstUserInput << " + " << secondUserInput << " is "
              << firstUserInput + secondUserInput << ".\n";

    std::cout << firstUserInput << " - " << secondUserInput << " is "
              << firstUserInput - secondUserInput << ".\n";

    return 0;
}
