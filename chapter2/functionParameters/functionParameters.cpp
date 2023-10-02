#include <iostream>

// example of what to do when a parameter is no longer used in the fn body
// we keep in there to be able to take in parameters but have it be an
// unnamed parameter so that it will not break the function usages
int getValueFromUser(int /*count*/)
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

void printDouble(int value) // This function now has an integer parameter
{
    std::cout << value << " doubled is: " << value * 2 << '\n';
}

int main()
{
    int num{getValueFromUser(2)};

    printDouble(num);

    return 0;
}
