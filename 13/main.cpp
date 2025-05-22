
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

// struct Fraction {
//     int numerator {};
//     int denominator {1};
// };

// Fraction getFraction() {
//     Fraction frac {};
//     std::cout << "Enter a value for the numerator: ";
//     std::cin >> frac.numerator;
//     std::cout << "Enter a value for the denominator: ";
//     std::cin >> frac.denominator;
//     std::cout << '\n';

//     return frac;
// }

// Fraction multiplyFractions(const Fraction& f1, const Fraction& f2) {
//     return {f1.numerator * f2.numerator, f1.denominator * f2.denominator};
// }

// void printFraction(const Fraction& x) {
//     std::cout << "Your fractions multiplied together: " << x.numerator << "/" << x.denominator << '\n';
// }

// int main() {
//     Fraction f1 {getFraction()};
//     Fraction f2 {getFraction()};
//     printFraction(multiplyFractions(f1, f2));
// }

// enum MonsterType {
//     ogre,
//     dragon,
//     orc,
//     spider,
//     slime,
// };

// struct Monster {
//     MonsterType type {};
//     std::string name {};
//     int health {};
// };

// void printMonster(const Monster& x) {
//     std::string_view typeName;
//     switch (x.type) {
//         case ogre:
//             typeName = "Ogre";
//             break;
//         case dragon:
//             typeName = "Dragon";
//             break;
//         case orc:
//             typeName = "Orc";
//             break;
//         case spider:
//             typeName = "Giant Spider";
//             break;
//         case slime:
//             typeName = "Slime";
//             break;
//         default:
//             typeName = "Unknown";
//             break;
//     };

//     std::cout << "This " << typeName << " is named " << x.name << " and has " << x.health << " health." << '\n';
// }

// int main() {
//     Monster m1 {ogre, "Torg", 145};
//     Monster m2 {slime, "Blurp", 23};
//     printMonster(m1);
//     printMonster(m2);

//     return 0;
// }

// struct Pair
// {
//     int first{};
//     int second{};
// };
// #include <iostream>

// template <typename T>
// struct Pair
// {
//     T first{};
//     T second{};
// };

// int main()
// {
//     Pair<int> p1{ 5, 6 };        // instantiates Pair<int> and creates object p1
//     std::cout << p1.first << ' ' << p1.second << '\n';

//     Pair<double> p2{ 1.2, 3.4 }; // instantiates Pair<double> and creates object p2
//     std::cout << p2.first << ' ' << p2.second << '\n';

//     Pair<double> p3{ 7.8, 9.0 }; // creates object p3 using prior definition for Pair<double>
//     std::cout << p3.first << ' ' << p3.second << '\n';

//     return 0;
// }

// #include <iostream>

// template <typename T>
// struct Pair
// {
//     T first{};
//     T second{};
// };

// template <typename T>
// constexpr T max(Pair<T> p)
// {
//     return (p.first < p.second ? p.second : p.first);
// }

// int main()
// {
//     Pair<int> p1{ 5, 6 };
//     std::cout << max<int>(p1) << " is larger\n"; // explicit call to max<int>

//     Pair<double> p2{ 1.2, 3.4 };
//     std::cout << max(p2) << " is larger\n"; // call to max<double> using template argument deduction (prefer this)

// //     return 0;
// // }

// template <typename T>
// struct Triad {
//     T first {};
//     T second {};
//     T third {};
// };

// template <typename T>
// Triad(T,T,T) -> Triad<T>;

// template <typename T>
// void print(Triad<T>& t ) {
//     std::cout << "[" << t.first << ", " << t.second << ", " << t.third << "]";
// }

// int main()
// {
// 	Triad t1{ 1, 2, 3 }; // note: uses CTAD to deduce template arguments
// 	print(t1);

// 	Triad t2{ 1.2, 3.4, 5.6 }; // note: uses CTAD to deduce template arguments
// 	print(t2);
    

// 	return 0;
// }
