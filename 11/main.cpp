#include <iostream>

// template <typename T>
// auto add(T x, T y)
// {
//     return x + y;
// }

// // Add two values with non-matching types
// // As of C++20 we could also use auto add(auto x, auto y)
// template <typename T, typename U>
// auto add(T x, U y)
// {
//     return x + y;
// }

// Abbreviated function template (C++20+)
// auto max(auto x, auto y) {
//     return (x < y) ? y : x;
// }

// int main() {
//     // Case 1: Same type (int)
//     std::cout << max(3, 5) << '\n';       // Output: 5 ✅

//     // Case 2: Same type (double)
//     std::cout << max(1.5, 2.5) << '\n';   // Output: 2.5 ✅

//     // Case 3: Different types (int + double)
//     std::cout << max(2, 3.5) << '\n';     // Output: 3.5 ✅

//     return 0;
// }
// // Compute x^n at compile time (fast!) 🚀
// template <int N>
// double power(double x) {
//     double result = 1.0;
//     for (int i = 0; i < N; ++i)
//         result *= x;
//     return result;
// }

// When you call power<5>(2.0):
// double power<5>(double x) {
//     return x * x * x * x * x; // Loop unrolled → no runtime loops!
// }

// template <int Size>
// class FixedArray {
//     int data[Size]; // Size known at compile time → stack allocation (fast!)
// };
// FixedArray<100> arr; // No dynamic memory allocation!


template <int N>
constexpr int factorial() {
    static_assert(N >= 0);
    int product {1};

    for (int i {2}; i <= N; ++i) {
        product *= i;
    }
    return product;
}

int main()
{
    static_assert(factorial<0>() == 1);
    static_assert(factorial<3>() == 6);
    static_assert(factorial<5>() == 120);

    factorial<-3>(); // should fail to compile

    return 0;
}