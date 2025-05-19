#include <iostream>

// int main()
// {
//     int x{};
//     const double d{};

//     int y { x }; // x is a modifiable lvalue expression
//     const double e { d }; // d is a non-modifiable lvalue expression

//     return 0;
// }
// int return5()
// {
//     return 5;
// }

// int main()
// {
//     int x{ 5 }; // 5 is an rvalue expression
//     const double d{ 1.2 }; // 1.2 is an rvalue expression

//     int y { x }; // x is a modifiable lvalue expression
//     const double e { d }; // d is a non-modifiable lvalue expression
//     int z { return5() }; // return5() is an rvalue expression (since the result is returned by value)

//     int w { x + 1 }; // x + 1 is an rvalue expression
//     int q { static_cast<int>(d) }; // the result of static casting d to an int is an rvalue expression

//     return 0;
// }

// int main()
// {
//     int x{ 1 };
//     int& ref{ x };

//     std::cout << x << ref << '\n';

//     int y{ 2 };
//     ref = y;
//     y = 3;

//     std::cout << x << ref << '\n';

//     x = 4;

//     std::cout << x << ref << '\n';

//     return 0;
// }



// 12.5
#include <iostream>
#include <string>

void printValue(std::string& y) // type changed to std::string&
{
    std::cout << y << '\n';
} // y is destroyed here

int main()
{
    std::string x { "Hello, world!" };

    printValue(x); // x is now passed by reference into reference parameter y (inexpensive)

    return 0;
}

#include <iostream>

void printValue(int& y) // y only accepts modifiable lvalues
{
    std::cout << y << '\n';
}

// int main()
// {
//     int x { 5 };
//     printValue(x); // ok: x is a modifiable lvalue

//     const int z { 5 };
//     printValue(z); // error: z is a non-modifiable lvalue

//     printValue(5); // error: 5 is an rvalue

//     return 0;
// }

// #include <iostream>

// int main()
// {
//     int x{ 5 };
//     std::cout << x << '\n';  // print the value of variable x
//     std::cout << &x << '\n'; // print the memory address of variable x

//     std::cout << *(&x) << '\n'; // print the value at the memory address of variable x (parentheses not required, but make it easier to read)

//     return 0;
// }

// int main()
// {
//     int x { 5 };    // normal variable
//     int& ref { x }; // a reference to an integer (bound to x)

//     int* ptr;       // a pointer to an integer

//     return 0;
// }
// int main()
// {
//     int v{ 5 };

//     int* ptr0 { &v };             // points to an "int" but is not const itself.  We can modify the value or the address.
//     const int* ptr1 { &v };       // points to a "const int" but is not const itself.  We can only modify the address.
//     int* const ptr2 { &v };       // points to an "int" and is const itself.   We can only modify the value.
//     const int* const ptr3 { &v }; // points to a "const int" and is const itself.  We can't modify the value nor the address.

//     // if the const is on the left side of the *, the const belongs to the value
//     // if the const is on the right side of the *, the const belongs to the pointer

//     return 0;
// }

#include <iostream>
#include <string>

void printByValue(std::string val) // The function parameter is a copy of str
{
    std::cout << val << '\n'; // print the value via the copy
}

void printByReference(const std::string& ref) // The function parameter is a reference that binds to str
{
    std::cout << ref << '\n'; // print the value via the reference
}

int main()
{
    std::string str{ "Hello, world!" };

    printByValue(str); // pass str by value, makes a copy of str
    printByReference(str); // pass str by reference, does not make a copy of str

    return 0;
}