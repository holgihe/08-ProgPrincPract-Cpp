#include <iostream>
#include <string>

int main () {
    std::string input1 = "";
    std::string input2 = "";
    while(input1 != "|") {
        std::cout << "Enter first number (Enter '|' to exit. juhuu):    ";
        std::cin >> input1;
        if(input1 !="|") {
            std::cout << "Second number:  ";
            std::cin >> input2;
            double input1_db = std::stod(input1);
            double input2_db = std::stod(input2);
            std::cout << "1.Number is " << input1_db << ", ";
            std::cout << "2.Number is " << input2_db << std::endl;
            if(input1_db > input2_db) {
                std::cout << "the smaller value is:  " << input2_db << ", ";
                std::cout << "the larger  value is:  " << input1_db << std::endl << std::endl;
            }
            else if (input1_db < input2_db) {
                std::cout << "the smaller value is:  " << input1_db << ", ";
                std::cout << "the larger  value is:  " << input2_db << std::endl << std::endl;
            }
            else if (input1_db == input2_db) {
                std::cout << "the numbers are equal" << std::endl << std::endl << std::endl;
            }
        }
    }
}