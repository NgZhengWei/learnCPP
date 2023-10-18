#include <iostream>

int getValue()
{
    // cerr has no buffering allowing immediate print which is good for debugging
    std::cerr << "getValue() called\n";
    return 4;
}

// int main()
// {
//     std::cerr << "main() called\n";
//     std::cout << getValue() << '\n';

//     return 0;
// }
