#include <iostream>

// int main()
// {
//     std::cout << "Enter an integer: ";
//     int smaller{};
//     std::cin >> smaller;
//     std::cout << "Enter a larger integer: ";
//     int larger{};
//     std::cin >> larger;

//     if (smaller > larger) {
//         std::cout << "Swapping the values" << "\n";
//         int temp {larger};
//         larger = smaller;
//         smaller = temp;
//     }
//     std::cout << "The smaller value is " << smaller << '\n';
//     std::cout << "The larget value is " << larger << '\n';
// }

// // Non-constant global variables
// int g_x;                 // defines non-initialized global variable (zero initialized by default)
// int g_x {};              // defines explicitly value-initialized global variable
// int g_x { 1 };           // defines explicitly initialized global variable

// // Const global variables
// const int g_y;           // error: const variables must be initialized
// const int g_y { 2 };     // defines initialized global const

// // Constexpr global variables
// constexpr int g_y;       // error: constexpr variables must be initialized
// constexpr int g_y { 3 }; // defines initialized global constexpr

// constexpr and inline serve different purposes but work well together in modern C++. constexpr ensures that a variable or function is evaluated at compile time,
// making it ideal for constant expressions used in array sizes, template arguments, and performance-critical code. This eliminates runtime overhead by embedding the value directly into the compiled output.
// On the other hand, inline allows a variable or function defined in a header to be safely included in multiple translation units without causing multiple definition linker errors.
// When used together (e.g., inline constexpr), they allow a single definition of a constant to be shared across all source files
// while still benefiting from compile-time evaluation and avoiding duplication or linker issues. This combination is commonly used in modern C++ for global constants that need to be accessible project-wide and optimized for performance.


// #include "constants.h"
// #include <iostream>

// int main()
// {
// 	std::cout << "How many students are in your class? ";
// 	int students{};
// 	std::cin >> students;


// 	if (students > Constants::maxClassSize)
// 		std::cout << "There are too many students in this class";
// 	else
// 		std::cout << "This class isn't too large";

// 	return 0;
// }


int accumulate(int num) {
    static int sum {0};
    return sum += num;
}

int main()
{
    std::cout << accumulate(4) << '\n'; // prints 4
    std::cout << accumulate(3) << '\n'; // prints 7
    std::cout << accumulate(2) << '\n'; // prints 9
    std::cout << accumulate(1) << '\n'; // prints 10

    return 0;
}