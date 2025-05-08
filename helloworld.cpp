#include <iostream>

// #include <iostream> // for std::cout

// int main()
// {
//     std::cout << 5;       // print the literal number `5`
//     std::cout << -6.7;    // print the literal number `-6.7`
//     std::cout << 'H';     // print the literal character `H`
//     std::cout << "Hello"; // print the literal text `Hello`

//     return 0;
// }

// int x; // define a variable named x (of type int)
// double width; // define a variable named width, of type double

// int width; // define an integer variable named width
// width = 5; // assignment of value 5 into variable width

// variable width now has value 5

// #include <iostream>

// int main()
// {
//     int width { 5 };    // define variable width and initialize with initial value 5
//     std::cout << width; // prints 5

//     return 0;
// }

// VARIABLE INITIALIZATION FORMS
/////////////////////////////////

// int a;         // default-initialization (no initializer)

// Traditional initialization forms:
// int b = 5;     // copy-initialization (initial value after equals sign)
// int c ( 6 );   // direct-initialization (initial value in parenthesis)

// // Modern initialization forms (preferred):
// int d { 7 };   // direct-list-initialization (initial value in braces)
// int e {};      // value-initialization (empty braces)
// int width {}; // value-initialization / zero-initialization to value 0

// int width {}; // value-initialization / zero-initialization to value 0

// #include <iostream> // for std::cout and std::endl

// int main()
// {
//     std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line
//     std::cout << "My name is Alex." << std::endl;

//     return 0;
// }
// OUTPUT:
// Hi!
// My name is Alex.
// Key insight

// The opposite of buffered output is unbuffered output. With unbuffered output, each individual output request is sent directly to the output device.

// Writing data to a buffer is typically fast, whereas transferring a batch of data to an output device is comparatively slow. Buffering can significantly increase performance by batching multiple output requests together to minimize the number of times output has to be sent to the output device.
// #include <iostream> // for std::cout and std::cin

// int main()
// {
//    std::cout << "Enter a number: "; // ask user for a number

//    int x{};       // define variable x to hold user input (and value-initialize it)
//    std::cin >> x; // get number from keyboard and store it in variable x

//    std::cout << "You entered " << x << " as your first number" << '\n';

//    int y{};
//    std::cout << "Enter the second number on the next line. I'll move the cursor there for you \n";
//    std::cin >> y; // get number from keyboard and store it in variable y

//    std::cout << "You entered " << y << '\n';
//    std::cout << "The sum of " << x << " and " << y << " is " << (x + y) << '\n';
//    std::cout << "The product of " << x <<  " and " << y << " is going to be printed on the next line. \n";
//    std::cout << "Ok, so the product is " << (x * y) << '\n';
//    return 0;
// }

// int main()
//    {
//       std::cout << "Okay let's try inputting two numbers at once. Enter 2 numbers seperated by a space on the next line.\n";

//       int x{};
//       int y{};
//       std::cin >> x >> y;
//       std::cout << "You entered the number " << x << " and the number " << y << '\n';
//       return 0;
//    }

// int main()
//    {
//       std::cout << "Okay, let's try inputting two numbers and utilize the input buffer. Enter two numbers on the next line.\n";
//       int x{};
//       int y{};
//       std::cin >> x;
//       std::cin >> y;
//       // Check what is extracted next from the input buffer when using decimals
//       std::cout << "You eneterd the number " << y << '\n';
//       std::cout << "Ok, it looks like you entered the number " << x << " and " << y << '\n';
//       return 0;
//    }

// 1.5 QUESTION 2

// int main()
//    {
//       int x{};
//       int y{};
//       int z{};

//       std::cout << "Enter three numbers separated by spaces and we'll print them\n";

//       std::cin >> x >> y >> z;
//       std::cout << "The numbers you entered are " << x << ", " << y << ", and " << z << ".\n"; 
//       return 0;
//    }


// int main()
//    {
//       std::cout << 3 + 4 << '\n';

//       std::cout << 3 + 4 - 5 << '\n';

//       std::cout << 2 + 3 * 4 << '\n';

//       int z {2};

//       std::cout << (z = 10) << '\n';

//       return 0;
//    }

// 1.11
// int main()
//    {
//       std::cout << "Enter a number: ";

//       int num {};
//       std::cin >> num;
//       std::cout << "Double " << num << " is: " << (num * 2) << '\n';
//       std::cout << "Triple " << num << " is: " << (num * 3) << '\n';
//       return 0;
//    }

// 1.x QUESTION 3

// int main()
//    {
//       std::cout << "Enter an integer: ";
//       int a {};
//       int b {};
//       std::cin >> a;
//       std::cout << "Enter another integer: ";
//       std::cin >> b;
      
//       std::cout << a << " + " << b << " is " << (a + b) << ".\n";

//       std::cout << a << " - " << b << " is " << (a - b) << ".\n";

//       return 0;
//    }

// int getValue()
//    {
//       std::cout << "Enter a number: ";
//       int input {};
//       std::cin >> input;
//       return input;
//    }

// int main()
//    {
//       int num {getValue()};
//       std::cout << num << " doubled is: " << (num * 2) << '\n';

//    }



// int getValue()
//    {
//       std::cout << "Enter an integer: ";
//       int input{};
//       std::cin >> input;
//       return input;
//    }

// void printDouble(int value)
//    {
//       std::cout << value << " doubled is: " << (value * 2) << ".\n";
//    }

// int main()
//    {
//       int num {getValue()};
//       printDouble(num);
//       return 0;
//    }


// int doubleNumber(int x)
// {
//     return 2 * x;
// }

// int getValue()
//    {
//       std::cout << "Enter an integer: ";
//       int input {};
//       std::cin >> input;
//       return input;
//    }

int add(int x, int y);

int main() 
   {
      std::cout << "The sum of 3 and 4 is: " << add(3, 4) << ".\n";
      return 0;
   }