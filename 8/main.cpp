#include <iostream>

// 8.6 QUIZ - SWITCH STATEMENTS
// int calculate(int x, int y, char op)
// {
//     switch (op) {
//         case '+':
//             return x + y;
//         case '-':
//             return x - y;
//         case '*':
//             return x * y;
//         case '/':
//             return x / y;
//         case '%':
//             return x % y;
//         default:
//             std::cout << "Invalid operator. Returning ";
//             return 0;
//     }
// }

// int main() {
//     std::cout << "Enter an integer: ";
//     int num1 {};
//     std::cin >> num1;
//     std::cout << "Enter another integer: ";
//     int num2 {};
//     std::cin >> num2;
//     char op {};
//     std::cout << "Enter an operator: ";
//     std::cin >> op;
//     std::cout << num1 << " " << op << " " << num2 << " is " << calculate(num1, num2, op) << '\n';

// }
// #include <cmath> // for sqrt() function

// int main()
// {
//     double x{};
// tryAgain: // this is a statement label
//     std::cout << "Enter a non-negative number: ";
//     std::cin >> x;
//     if (x < 0.0)
//         goto tryAgain; // this is the goto statement
//     std::cout << "The square root of " << x << " is " << std::sqrt(x) << '\n';
//     return 0;
// }

// int main()
// {
//     char az_char{'a'};
//     while (az_char <= 'z')
//     {
//         std::cout << az_char << " " << static_cast<int>(az_char) << "\n";
//         ++az_char;
//     }
// }

// 8.8 QUIZ
// Loop between 5 and 1
// int main () {
//     int outer {5};
//     while (outer >= 1) {
//         int inner {outer};
//         while (inner >= 1) {
//         std::cout << inner << ' ';
//         --inner;
//         }
//         std::cout << '\n';
//          --outer;
//     }
// }

// int main () {
//     int outer {1};
//     while (outer <= 5) {
//         int inner {5};
//         while (inner >= 1) {
//             if (outer >= inner) {
//                 std::cout << inner << ' ';
//             }
//             else {
//                 std::cout << "  ";
//             }
//             --inner;
//         }
//         std::cout << '\n';
//         ++outer;
//     }
// }

// 8.10 QUIZ
// int main() {
//     for (int i{0}; i < 21; i += 2) {
//         std::cout << i << " ";
//     }
//     std::cout << '\n';
// }

// int sumTo(int x) {
//     int sum {0};
//     for (int i {1}; i <=x; ++i) {
//         sum += i;
//     }
//     return sum;
// }

// int main() {
//     std::cout << "Enter a positive number: ";
//     int num {};
//     std::cin >> num;
//     std::cout << "The sum is " << sumTo(num) << '\n';
// }

void fizzbuzz(int x)
{
    for (int i {1}; i <= x; ++i)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
            std::cout << "fizzbuzz";
        else if (i % 5 == 0)
            std::cout << "buzz";
        else if (i % 3 == 0)
            std::cout << "fizz";
        else
            std::cout << i;
        std::cout << '\n';
    }
}
int main()
{
    std::cout << "Enter a positive number: ";
    int num{};
    std::cin >> num;
    fizzbuzz(num);
    return 0;
}