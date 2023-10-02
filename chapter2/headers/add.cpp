// include paired header to catch errors during compilation instead of during linking
// e.g. if return type for same function definition differs
#include "add.h"

int add(int a, int b)
{
    return a + b;
}
