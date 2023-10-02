#include <iostream>

int getUserInt()
{
    std::cout << "Enter an int: ";

    int userInput{};
    std::cin >> userInput;

    return userInput;
}

int doubleNumber(int x)
{
    return x * 2;
}

void printUserInt(int userInput)
{
    std::cout << "Your int doubled is " << userInput << '\n';
}

int main()
{
    int userInput{getUserInt()};

    printUserInt(doubleNumber(userInput));

    return 0;
}
