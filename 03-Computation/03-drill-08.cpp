#include <iostream>
#include <cmath>
#include <string>

int main () {
    std::string input = "";
    std::string input_nr = "";
    std::string input_fmt = "";
    double input_db = 0;
    double smallest_db = pow(2,53);
    double largest_db = 0;

    while(input != "|") {
        input = "";
        input_nr = "";
        input_fmt = "";

        std::cout << "Enter a number with unit (cm, m, in, ft). (Enter '|' to exit):   ";
        // Read input from cin
        std::getline(std::cin, input);
        for(int i=0; i < input.length(); i++) {
            // separate the number into input_nr. expected comma must be '.'
            if( (input[i] >= 48 && input[i] <= 57) || input[i]==46) {
                input_nr.push_back(input[i]);
            }
            // separate the unit into input_fmt
            if( input[i] == 'c' || input[i] == 'i' || input[i] == 'f' || input[i] == 'm' || input[i] == 'n' || input[i] == 't') {
                input_fmt.push_back(input[i]);
            }
        }
        // Sanity check, if unit is a valid one ( cm, m, in, ft)
        if (input_fmt != "m" && input_fmt != "cm" && input_fmt != "in" && input_fmt != "ft") {
            std::cout << "Unit is not correct. " << std::endl;
            input_fmt = "invalid";
        }
        //std::cout << input_nr << std::endl;
        //std::cout << input_fmt << std::endl;

        if(input !="|" && input_fmt != "invalid") {
            // Convert input_nr into standard meters, depending on unit 
            if (input_fmt == "cm") {
                input_db = std::stod(input) / 100;
            }
            else if (input_fmt == "m") {
                input_db = std::stod(input);
            }
            if (input_fmt == "in") {
                input_db = std::stod(input) * 0.0254;
            }
            if (input_fmt == "ft") {
                input_db = std::stod(input) * 0.3048;
            }
            
            if (input_db < smallest_db) {
                smallest_db = input_db;
                std::cout << input_db << " meter is the smallest number so far" << std::endl << std::endl;
            }
            else if(input_db > largest_db) {
                largest_db = input_db;
                std::cout << input_db << " meter is the largest number so far" << std::endl << std::endl;
            }
        }
    }
}
