#include <iostream>
#include <string>

int main () {
    std::string input1;
    int input2 = 0;
    while(input1 != "|") {
        std::cout << "Enter two numbers, separated by space. Enter '| |' to exit:    " << std::endl;
        std::cin >> input1 >> input2;
        std::cout << "1.Number is " << input1 << std::endl;
        std::cout << "2.Number is " << input2 << std::endl;
    }
}