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