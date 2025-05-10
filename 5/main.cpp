#include <iostream>

// int main()
// {
//     int bin{};    // assume 16-bit ints
//     bin = 0x0001; // assign binary 0000 0000 0000 0001 to the variable
//     bin = 0x0002; // assign binary 0000 0000 0000 0010 to the variable
//     bin = 0x0004; // assign binary 0000 0000 0000 0100 to the variable
//     bin = 0x0008; // assign binary 0000 0000 0000 1000 to the variable
//     bin = 0x0010; // assign binary 0000 0000 0001 0000 to the variable
//     bin = 0x0020; // assign binary 0000 0000 0010 0000 to the variable
//     bin = 0x0040; // assign binary 0000 0000 0100 0000 to the variable
//     bin = 0x0080; // assign binary 0000 0000 1000 0000 to the variable
//     bin = 0x00FF; // assign binary 0000 0000 1111 1111 to the variable
//     bin = 0x00B3; // assign binary 0000 0000 1011 0011 to the variable
//     bin = 0xF770; // assign binary 1111 0111 0111 0000 to the variable

//     return 0;
// }

// #include <iostream>

// int main()
// {
//     int bin{};        // assume 16-bit ints
//     bin = 0b1;        // assign binary 0000 0000 0000 0001 to the variable
//     bin = 0b11;       // assign binary 0000 0000 0000 0011 to the variable
//     bin = 0b1010;     // assign binary 0000 0000 0000 1010 to the variable
//     bin = 0b11110000; // assign binary 0000 0000 1111 0000 to the variable

//     return 0;
// }

// Question #1

// Write a program that asks the user to enter their full name and their age. As output, tell
// the user the sum of their age and the number of characters in their name (use the std::string::length() member function to get the length of the string).
//  For simplicity, count any spaces in the name as a character.
// Enter your full name: John Doe
// Enter your age: 32
// Your age + length of name is: 40

// 5.7 program question
// std::string getName()
// {
//     std::cout << "Enter your full name: ";
//     std::string name {};
//     std::getline(std::cin >> std::ws, name);
//     return name;
// }

// int getAge()
// {
//     std::cout << "Enter your age: ";
//     int age {};
//     std::cin >> age;
//     return age;
// }
// int main()
// {
//     std::string name {getName()};
//     int age {getAge()};
//     std::cout << "Your age + length of name is: " << name.length() + age << ".\n";
//     return 0;
// }

std::string getName(int num)
{
    std::cout << "Enter the name of person #" << num << ": ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    return name;
}

int getAge(std::string_view name)
{
    std::cout << "Enter the age of " << name << ": ";
    int age{};
    std::cin >> age;
    return age;
}

int main()
{
    std::string firstName{getName(1)};
    int firstAge{getAge(firstName)};

    std::string secondName{getName(2)};
    int secondAge{getAge(secondName)};

    if (firstAge > secondAge) {
        std::cout << firstName << " (age " << firstAge << ") " << "is older than " << secondName << " (age " << secondAge << ").\n";
        return 0;
    }
    std::cout << secondName << " (age " << secondAge << ") " << "is older than " << firstName << " (age " << firstAge << ").\n";
    return 0;
}