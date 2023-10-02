#ifndef ADD_H // header guard
#define ADD_H // header guard

// having a fn in header files is a problem because macros apply to 1 code file
// only, meaning contents in header guards can be defined twice within the same
// program, resulting in 2 definitions for the same fn
// soln: put fn definitions in cpp files not header files
// int add(int a, int b)
// {
//     return a + b;
// }

int add(int a, int b);

#endif // header guard - prevent redefinition of a header file
