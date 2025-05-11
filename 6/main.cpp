#include <iostream>
// 6.3 Q2
// int getValue()
// {
//     std::cout << "Enter an integer: ";
//     int input {};
//     std::cin >> input;
//     return input;
// }

// constexpr bool isEven(int num)
// {
//     if ((num % 2) == 0)
//         return true;
//     return false;
// }

// int main()
// {
//     int num {getValue()};

//     if (isEven(num)) {
//         std::cout << num << " is even" << '\n';
//     }
//     else {
//         std::cout << num << " is odd" << '\n';
//     }
// }

// #include <iostream>

// int main()
// {
//     constexpr bool inBigClassroom { false };
//     constexpr int classSize { inBigClassroom ? 30 : 20 };
//     std::cout << "The class size is: " << classSize << '\n';

//     return 0;
// }

// 6.x Quiz

constexpr std::string_view getQuantityPhrase(int num)
{
    if (num < 0)
        return "negative";
    if (num == 0)
        return "no";
    if (num == 1)
        return "a single";
    if (num == 2)
        return "a couple of";
    if (num == 3)
        return "a few";
    return "many";
}

// Write the function getApplesPluralized() here
constexpr std::string_view getApplesPluralized(int apples)
{
    return ((apples == 1) ? "apple" : "apples");
}

int main()
{
    constexpr int maryApples{3};
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}