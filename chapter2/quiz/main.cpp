// Program: reads two separate integers from the user, adds them together
// and then outputs the answer
#include "io.h"

int main()
{
    int a{readNumber()};
    int b{readNumber()};
    writeAnswer(a + b);
    return 0;
}
