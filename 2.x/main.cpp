#include <iostream>

int readNumber()
    {
        std::cout << "Enter an integer: ";
        int input{};
        std::cin >> input;
        return input;   
    }

void writeNumber(int num_one, int num_two)
    {
        std::cout << "The sum of those two numbers is " << num_one + num_two << ".\n";
    }

int main()
    {
        int a {readNumber()};
        int b {readNumber()};
        writeNumber(a, b);
        return 0;
    }