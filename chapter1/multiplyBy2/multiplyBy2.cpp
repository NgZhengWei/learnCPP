#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";

    int userInt{};
    std::cin >> userInt;

    std::cout << "Double " << userInt << " is: " << userInt * 2 << '\n';
    std::cout << "Triple " << userInt << " is: " << userInt * 3 << '\n';

    return 0;
}
