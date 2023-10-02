#include <iostream> // input/output library from C++ std lib - this part is called iostream header

void doNothing(int &) // Don't worry about what & is for now, we're just using it to trick the compiler into thinking variable x is used
{
}

int main()
{
    int x; // if uninitialised gives undefined value resulting in undefined behaviour
    doNothing(x);
    // << is the insertion operator (also used for concatanation)
    std::cout << "Hello "
                 "world"
              << "!" << '\n';                                                                   // cout stands for character output. We are sending string to console
    std::cout << 4 << std::endl;                                                                // also works with numbers. std::endl prints a newline char, positioning the cursor to the next line
    std::cout << x << " <-- Undefined variable value" << std::endl;                             // and variables
    std::cout << sizeof(int) << " <-- size of an int is an implementation defined behaviour\n"; // unspeficied behaviour is defined by the compiler but is undocumented unlike implementation defined behaviours
    // output is buffered (rollercoaster analogy). buffer is flushed periodically meaning transferred to their destination in this case, the terminal
    // this buffering increases speed of program as transferring data from memory to output device us usually slower than writing to buffer

    // general rule: output newline whenever a line of output is complete
    // general rule: \n is preferred over std::endl as std::endl moves cursor to next line and also flushes buffer which lowers performance
    // general rule: use single quotes when using \n alone - '\n'

    std::cout << "\nEXAMPLE PROGRAM\n";
    std::cout << "Enter 2 numbers seperated by a space: ";

    int user_int1{}; // initialise variable to hold user input (zero initialised)
    // int user_int2{};

    std::cin >> user_int1; // >> is the extraction operator. extract number from keyboard and store it in variable user_int

    std::cout << "You entered " << user_int1 << '\n';
    // std::cout << "You entered " << user_int1 << " and " << user_int2 << '\n';

    // general rule: 80 chars max for a line

    return 0;
}
