/*
// TODO Add holgihe sourcecode header MIT
// TODO Remove include algorithm
// BUG  Here is an bug find it ! fs
 */

#include <iostream>
#include <vector>

int main () 
	{
    std::vector<double> temps;
    std::cout << "03-Excercise-06 - Simple Calculator\n";
    std::cout << "Enter two numbers and an operation (+ - * /).\n";
    std::cout << "E.G.:  34.77 77.99 -\n";

    double num1 {0};
    double num2 {0};
    double result {0};
    char operation {'A'};

    std::cin >> num1 >> num2 >> operation;
    switch (operation) {
    case '+':
        result = num1 + num2;
        std::cout << "The sum of " << num1 << " and " << num2 << " is " << result << "\n";
        break;
    case '-':
        result = num1 - num2;
        std::cout << "The difference of " << num1 << " and " << num2 << " is " << result << "\n";
        break;
    case '*':
        result = num1 * num2;
        std::cout << num1 << " multiplied with " << num2 << " is " << result << "\n";
        break;
    case '/':
        result = num1 / num2;
        std::cout << num1 << " divided by " << num2 << " is " << result << "\n";
        break;
    default:
        std::cout << "Sorry, this operation is unknown for me....\n";
        break;
    }

    }
