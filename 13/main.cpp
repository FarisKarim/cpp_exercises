
// namespace Monsters
// {
//     enum MonsterType
//     {
//         orc,
//         goblin,
//         troll,
//         ogre,
//         skeleton,
//     };
// }
// int main() {
//     Monsters::MonsterType boss {Monsters::troll};
// }
// enum Color
// {
//     black,   // 0
//     red,     // 1
//     blue,    // 2
//     green,   // 3
//     white,   // 4
//     cyan,    // 5
//     yellow,  // 6
//     magenta, // 7
// };

// int main()
// {
//     Color shirt{ blue }; // shirt actually stores integral value 2

//     return 0;
// }
#include <iostream>

// struct Employee
// {
//     int id {};
//     int age {};
//     double wage {};
// };

// void printEmployee(const Employee& employee) // note pass by reference here
// {
//     std::cout << "ID:   " << employee.id << '\n';
//     std::cout << "Age:  " << employee.age << '\n';
//     std::cout << "Wage: " << employee.wage << '\n';
// }

// int main()
// {
//     Employee joe { 14, 32, 24.15 };
//     Employee frank { 15, 28, 18.27 };

//     // Print Joe's information
//     printEmployee(joe);

//     std::cout << '\n';

//     // Print Frank's information
//     printEmployee(frank);

//     return 0;
// }

// struct AdStats {
//     int adsWatched {};
//     int clicked {};
//     int earnings {};
// };

// void calculateRevenue(const AdStats& x) {
//     std::cout << "Number of ads watched: " << x.adsWatched << ".\n";
//     std::cout << "Percentage of users who clicked on ad: " << x.clicked << ".\n";
//     std::cout << "Avg earnings per clicked ad: " << x.earnings << ".\n";
//     std::cout << "Overall Revenue: " << "$" << (x.adsWatched * x.clicked * x.earnings) / 100 << ".\n";
// }

// int main () {
//     int ads {};
//     std::cout << "How many ads were watched?" << "\n";
//     std::cin >> ads;
//     std::cout << "What percentage of users clicked on an ad?" << '\n';
//     int clicked {};
//     std::cin >> clicked;
//     std::cout << "Average earnings per clicked ad?" << '\n';
//     int earned {};
//     std::cin >> earned;
//     AdStats carSite {ads, clicked, earned};
//     calculateRevenue(carSite);
// }

struct Fraction {
    int numerator {};
    int denominator {1};
};

Fraction getFraction() {
    Fraction frac {};
    std::cout << "Enter a value for the numerator: ";
    std::cin >> frac.numerator;
    std::cout << "Enter a value for the denominator: ";
    std::cin >> frac.denominator;
    std::cout << '\n';

    return frac;
}

Fraction multiplyFractions(const Fraction& f1, const Fraction& f2) {
    return {f1.numerator * f2.numerator, f1.denominator * f2.denominator};
}

void printFraction(const Fraction& x) {
    std::cout << "Your fractions multiplied together: " << x.numerator << "/" << x.denominator << '\n';
}

int main() {
    Fraction f1 {getFraction()};
    Fraction f2 {getFraction()};
    printFraction(multiplyFractions(f1, f2));
}

