nt sum(int x, int y) // x and y are initialised here
// {
//     // lifetime of variable is time from creation to destruction during runtime
//     // lifetime is a runtime property
//     // best practice: define loval vars as close to their first use as possible
//     int z{x + y}; // z is initialised here at point of var definition

//     return z;
// } // variables are destroyed in reverse order to creation - z, y then x
//   // note: the order for creation and destruction is a guarantee but compilers
//   // have th