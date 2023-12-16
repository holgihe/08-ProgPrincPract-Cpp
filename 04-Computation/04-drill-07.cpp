#include <iostream>
#include <cmath>
#include <string>

int main () {
    std::string input = "";
    std::string input_fmt = "";
    double input_db = 0;
    double smallest_db = pow(2,53);
    double largest_db = 0;

    while(input != "|") {
        std::cout << "Enter a number with unit (cm, m, in, ft). (Enter '|' to exit):   aa s .";
        std::getline(std::cin, input);
        for(int i=0; i < input.length(); i++) {
            if(input[i] != ' ') {
                input_fmt.push_back(input[i]);
            }
        }
        std::cout << input_fmt;

        if(input !="|") {
            double input_db = std::stod(input);

            if (input_db < smallest_db) {
                smallest_db = input_db;
                std::cout << "the smallest number so far" << std::endl << std::endl;
            }
            else if(input_db > largest_db) {
                largest_db = input_db;
                std::cout << "the largest number so far" << std::endl << std::endl;
            }
        }
    }
}
