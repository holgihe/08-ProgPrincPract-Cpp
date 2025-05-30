#include <iostream>
#include <string>

int main () {
    std::string input1 = "";
    std::string input2 = "";
    while(input1 != "|") {
        std::cout << "Enter first number (Enter '|' to exit):    ";
        std::cin >> input1;
        if(input1 !="|") {
            std::cout << "Second number:  ";
            std::cin >> input2;
            int input1_int = std::stoi(input1);
            int input2_int = std::stoi(input2);
            std::cout << "1.Number is " << input1_int << ", ";
            std::cout << "2.Number is " << input2_int << std::endl;
            if(input1_int > input2_int) {
                std::cout << "the smaller value is:  " << input2_int << ", ";
                std::cout << "the larger  value is:  " << input1_int << std::endl << std::endl;
            }
            else if (input1_int < input2_int) {
                std::cout << "the smaller value is:  " << input1_int << ", ";
                std::cout << "the larger  value is:  " << input2_int << std::endl << std::endl;
            }
            else if (input1_int == input2_int) {
                std::cout << "the numbers are equal" << std::endl << std::endl << std::endl;
            }
        }
    }
}