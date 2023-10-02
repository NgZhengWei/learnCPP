// literals aka literal constant is a fixed value inserted into source code
// - has a value and a type
// - fixed value unlike variables
// - value is placed in executable and cannot be changed after created
// - variables' values are placed in memory which can be changed

// objects and variables are memory locations that hold values

// OPERANDS
// most operators use symbols like +,-, some use keywords like new, throw and delete
// number of operands an operator takes as input is called arity
// - unary, binary, ternary(only the conditional operator) and nullary(only the throw operator)
// some operators have side effects - effects other than the return value e.g. assignment = and insertion <<
// = and << returns the left operand to allow chaining. e.g. std::cout << "hello" << " world" evaluates to (std::cout << "hello") << " world"

#include <iostream>

int main()
{
    int x{};
    int y{};

    // x = y = 5; // same result as the 2 assignments below

    y = 5;
    x = y;

    std::cout << x << '\n';
    std::cout << y << '\n';

    x = 10;

    std::cout << x << '\n';
    std::cout << y << '\n';

    // an expression is 2 + 3, it involves operators and operands. They evaluate to one return value.
    // a statement ends in a ;. An expression statement's return value is discarded, e.g. 2 + 3; 5 is discarded.
    // statements are used to perform an action while expressions are used to calc a value

    return 0;
}
