#include <iostream>
#include <string>

void printFromSecondFile();

// this is a void function
// can use return statement with no return value
// no need to have a return statment at the end as it is done by default
void sayHi()
{
    std::cout << "Hi! \n";
}

int main()
{
    std::cout << 5 << '\n';

    // std::cout << sayHi();

    printFromSecondFile();

    return 0;
}
