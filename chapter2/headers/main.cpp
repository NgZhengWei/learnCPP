#include "add.h"
#include "functions.h"

#include <iostream>

int x{12};

int main()
{
    int x{add(1, 2)};

    std::cout << "Result of addition is " << x << '\n';

    return 0;
}
