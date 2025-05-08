#include <iomanip> // for std::setw (which sets the width of the subsequent output)
#include <iostream>
#include <climits> // for CHAR_BIT

// int main()
// {
//     std::cout << "A byte is " << CHAR_BIT << " bits\n\n";

//     std::cout << std::left; // left justify output

//     std::cout << std::setw(16) << "bool:" << sizeof(bool) << " bytes\n";
//     std::cout << std::setw(16) << "char:" << sizeof(char) << " bytes\n";
//     std::cout << std::setw(16) << "short:" << sizeof(short) << " bytes\n";
//     std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n";
//     std::cout << std::setw(16) << "long:" << sizeof(long) << " bytes\n";
//     std::cout << std::setw(16) << "long long:" << sizeof(long long) << " bytes\n";
//     std::cout << std::setw(16) << "float:" << sizeof(float) << " bytes\n";
//     std::cout << std::setw(16) << "double:" << sizeof(double) << " bytes\n";
//     std::cout << std::setw(16) << "long double:" << sizeof(long double) << " bytes\n";

//     return 0;
// }

// #include <cstdint> // for fixed-width integers
// #include <iostream>

// int main()
// {
//     std::int32_t x { 32767 }; // x is always a 32-bit integer
//     x = x + 1;                // so 32768 will always fit
//     std::cout << x << '\n';

//     return 0;
// }

// bool b1 { true };
// bool b2 { false };
// b1 = false;
// bool b3 {}; // default initialize to false

// int main()
// {
//     std::cout << true << '\n';
//     std::cout << false << '\n';

//     std::cout << std::boolalpha; // print bools as true or false

//     std::cout << true << '\n';
//     std::cout << false << '\n';
//     return 0;
// }

// returns true if x and y are equal, false otherwise
// bool isEqual(int x, int y)
// {
//     return x == y; // operator== returns true if x equals y, and false otherwise
// }

// int main()
// {
//     std::cout << "Enter an integer: ";
//     int x{};
//     std::cin >> x;

//     std::cout << "Enter another integer: ";
//     int y{};
//     std::cin >> y;

//     std::cout << std::boolalpha; // print bools as true or false

//     std::cout << x << " and " << y << " are equal? ";
//     std::cout << isEqual(x, y) << '\n'; // will return true or false

//     return 0;
// }

// // returns true if x and y are equal, false otherwise
// bool isEqual(int x, int y)
// {
//     return x == y; // operator== returns true if x equals y, and false otherwise
// }

// int main()
// {
//     std::cout << "Enter an integer: ";
//     int x {};
//     std::cin >> x;

//     std::cout << "Enter another integer: ";
//     int y {};
//     std::cin >> y;

//     if (isEqual(x, y))
//         std::cout << x << " and " << y << " are equal\n";
//     else
//         std::cout << x << " and " << y << " are not equal\n";

//     return 0;
// }

// int main()
// {
//     std::cout << "Enter an integer from 0 - 9 (inclusive): ";
//     int input{};
//     std::cin >> input;

//     if (input == 2 or input == 3 or input == 5 or input == 7)
//         std::cout << "The digit is prime!" << "\n";
//     else
//         std::cout << "The digit is not prime" << ".\n";
// }

// bool isAllowedToTakeFunRide()
// {
//     std::cout << "How tall are you? (cm)\n";

//     double height{};
//     std::cin >> height;

//     if (height >= 140.0)
//         return true;
//     return false;
// }

// int main()
// {
//     if (isAllowedToTakeFunRide())
//         std::cout << "Have fun!\n";
//     else
//         std::cout << "Sorry, you're too short.\n";

//     return 0;
// }

// EXTRACTING SPACES FROM BUFFER
// int main()
// {
//     std::cout << "Input a keyboard character: "; // assume the user enters "a b" (without quotes)

//     char ch{};
//     std::cin.get(ch); // extracts a, leaves " b\n" in stream
//     std::cout << "You entered: " << ch << '\n';

//     std::cin.get(ch); // extracts space, leaves "b\n" in stream
//     std::cout << "You entered: " << ch << '\n';

//     return 0;
// }

// explicit type conversion
// void print(int x)
// {
// 	std::cout << x << '\n';
// }

// int main()
// {
// 	print( static_cast<int>(5.5) ); // explicitly convert double value 5.5 to an int

// 	return 0;
// }

// char getValue()
// {
//     std::cout << "Enter a single character: ";
//     char input {};
//     std::cin >> input;
//     return input;
// }
// int main()
// {
//     char ch {getValue()};
//     std::cout << "You entered '" << ch << "', which has ASCII code " << static_cast<int>(ch) << ".\n";
//     return 0;
// }

// CHAPTER 4 SUMMARY QUIZ QUESTION 2
// Write the following program: The user is asked to enter 2 floating point numbers (use doubles).
//  The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. 
// The program computes the answer on the two numbers the user entered and prints the results. 
// If the user enters an invalid symbol, the program should print nothing.

double getValue()
{
    std::cout << "Enter a double value: ";
    double val {};
    std::cin >> val;
    return val;
}

int main()
{
    double first {getValue()};
    double second {getValue()};

    std::cout << "Enter +, -, *, or /: ";
    char op {};
    std::cin >> op;
    double result {};
    if (op == '+')
        result = first + second;
    else if (op == '-')
        result = first - second;
    else if (op == '*')
        result = first * second;
    else if (op == '/')
        result = first / second;
    else
        return 0;
    
    std::cout << first << " " << op << " " << second << " is " << result << '\n';
}

