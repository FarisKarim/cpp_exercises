// #include <iostream>

// struct IntPair {
// 	int first {};
// 	int second {};

// 	void print() {
// 		std::cout << "Pair(" << first << ", " << second << ")" << '\n';
// 	};
//     bool isEqual(IntPair& x) {
//         if ((first == x.first) && (second == x.second))
//             return true;
//         return false;
//     }
// };

// int main()
// {
// 	IntPair p1 {1, 2};
// 	IntPair p2 {3, 4};

// 	std::cout << "p1: ";
// 	p1.print();

// 	std::cout << "p2: ";
// 	p2.print();

//     std::cout << "p1 and p1 " << (p1.isEqual(p1) ? "are equal\n" : "are not equal\n");
// 	std::cout << "p1 and p2 " << (p1.isEqual(p2) ? "are equal\n" : "are not equal\n");

// 	return 0;
// }

#include <iostream>

// class Date // now a class instead of a struct
// {
//     // class members are private by default, can only be accessed by other members
//     int m_year {};     // private by default
//     int m_month {};    // private by default
//     int m_day {};      // private by default

//     void print() const // private by default
//     {
//         // private members can be accessed in member functions
//         std::cout << m_year << '/' << m_month << '/' << m_day;
//     }
// };

// int main()
// {
//     Date today { 2020, 10, 14 }; // compile error: can no longer use aggregate initialization

//     // private members can not be accessed by the public
//     today.m_day = 16; // compile error: the m_day member is private
//     today.print();    // compile error: the print() member function is private

//     return 0;
// }

class Point3d
{
	int m_x{};
	int m_y{};
	int m_z{};

public:
	void setValues(int x, int y, int z)
	{
		m_x = x;
		m_y = y;
		m_z = z;
	}
	void print()
	{
		std::cout << "<" << m_x << ", " << m_y << ", " << m_z << ">";
	}
	bool isEqual(const Point3d &x)
	{
		if ((m_x == x.m_x) && (m_y == x.m_y) && (m_z == x.m_z))
			return true;
		return false;
	}
};
int main()
{
	Point3d point1{};
	point1.setValues(1, 2, 3);

	Point3d point2{};
	point2.setValues(1, 2, 3);

	std::cout << "point 1 and point 2 are" << (point1.isEqual(point2) ? "" : " not") << " equal\n";

	Point3d point3{};
	point3.setValues(3, 4, 5);

	std::cout << "point 1 and point 3 are" << (point1.isEqual(point3) ? "" : " not") << " equal\n";

	return 0;
}

// #include <iostream>

// class Foo
// {
// private:
//     int m_value{ 4 }; // private member

// public:
//     int& value() { return m_value; } // returns a non-const reference (don't do this)
// };

// int main()
// {
//     Foo f{};                // f.m_value is initialized to default value 4
//     f.value() = 5;          // The equivalent of m_value = 5
//     std::cout << f.value(); // prints 5

//     return 0;
// }