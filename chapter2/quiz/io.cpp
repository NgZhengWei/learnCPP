#include "io.h"
#include <iostream>

int readNumber()
{
    std::cout << "Give an int: ";
    int x{};
    std::cin >> x;

    return x;
}

void writeAnswer(int answer)
{
    std::cout << "The sum is " << answer << '\n';
}
