# Bit Manipulation in C++

This is a simple console application that demonstrates various bit manipulation operations in C++. 

## Code Explanation

- The program starts by including the `iostream` library for input/output operations and uses the standard namespace `std`.

- A global variable `bitField` is defined and initialized with the value `2021`. This variable is used to perform the bit manipulation operations.

- Several function prototypes are declared for validating integer input and performing bit manipulation operations.

- The `main` function starts by printing a menu to the console. The user is asked to choose an operation to perform and, for some operations, a bit index.

- Depending on the user's choice, the corresponding bit manipulation operation is performed on `bitField`. The result is then printed to the console.

- The `validateInt` function ensures that the user's input is a valid integer. If the input is not valid, the user is asked to try again.

- The `TurnOn`, `TurnOff`, `Toggle`, `Negate`, `LeftShift`, and `RightShift` functions perform the corresponding bit manipulation operations on `bitField`.

- The `PrintBits` function prints the bits of `bitField` from the most significant to the least significant.
