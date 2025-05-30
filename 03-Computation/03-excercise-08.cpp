/*
// BUG  Here is an bug find it ! fs
 */

#include <cstring>
#include <iostream>
#include <vector>

int main () 
	{
    std::vector<double> temps;
    std::cout << "03-Exercise-08 - Simple Calculator\n";
    std::cout << "Enter two numbers and an operation (+ - * /).\n";
    std::cout << "E.G.:  34.77 77.99 -  or  seven nine +\n";

    std::string snum1;
    std::string snum2;
    double num1 {0};
    double num2 {0};
    double result {0};
    char operation {'A'};
    double convertstrdbl(std::string);

    std::cin >> snum1 >> snum2 >> operation;

    num1 = convertstrdbl(snum1);
    num2 = convertstrdbl(snum2);

    switch (operation) {
    case '+':
        result = num1 + num2;
        std::cout << "The sum of " << num1 << " and " << num2 << " is :  " << result << "\n";
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

double convertstrdbl(std::string snumxx)
    {
    std::vector<std::string> numbers {
                                     "zero", "one", "two", "three", "four", "five",
                                     "six", "seven", "eight", "nine" };
    for (int i=0; i<numbers.size();++i)
    {
        if (strcmp(numbers[i].c_str(),snumxx.c_str())==0)
            return i;
    }
    return std::atof(snumxx.c_str());
    }

