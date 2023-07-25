
// #include<iostream.h>
// #include<conio.h>

// void main()
// {
//     int a, b;
//     clrscr();
//     cout << "Enter value of a : "; cin >> a;
//     cout << "Enter value of b : "; cin >> b;

//     if(a>=30 $$ 50<b)
//         cout << a<<">=30 $$ 50<"<<b;
//     if(a>=30 || 50<b)
//         cout << a<<">=30 || 50<"<<b;
//     if(!(a>=30))
//         cout << a"!= 30";

    
//     getch();
// }

// include the input/output library
#include <iostream.h>

// declare the main function
int main()
{
    // declare two boolean variables to store the user input
    bool a, b;

    // prompt the user to enter the first boolean value
    std::cout << "Enter the first boolean value (true or false): ";

    // read the user input and store it in a
    std::cin >> std::boolalpha >> a;

    // prompt the user to enter the second boolean value
    std::cout << "Enter the second boolean value (true or false): ";

    // read the user input and store it in b
    std::cin >> std::boolalpha >> b;

    // print a blank line for readability
    std::cout << "\n";

    // print the result of applying AND operator on a and b
    std::cout << "AND: " << std::boolalpha << (a && b) << "\n";

    // print the result of applying OR operator on a and b
    std::cout << "OR: " << std::boolalpha << (a || b) << "\n";

    // print the result of applying NOT operator on a
    std::cout << "NOT (first operand): " << std::boolalpha << (!a) << "\n";

    // print the result of applying NOT operator on b
    std::cout << "NOT (second operand): " << std::boolalpha << (!b) << "\n";

    // return 0 to indicate successful execution
    return 0;
}
