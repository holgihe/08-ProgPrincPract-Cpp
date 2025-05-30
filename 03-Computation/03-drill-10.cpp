#include <iostream>
#include <cmath>
#include <string>
#include <vector>

int main () {
    std::string input = "";
    std::string input_nr = "";
    std::string input_fmt = "";
    std::vector<double> input_db;
    double smallest_db = pow(2,53);
    double largest_db = 0;
    double sum = 0;
    int cnt = 0;

    while(input != "|") {
        input = "";
        input_nr = "";
        input_fmt = "";

        std::cout << "Enter a number with unit (cm, m, in, ft). (Enter '|' to exit):   ";
        // Read input from cin
        std::getline(std::cin, input);
        for(int i=0; i < input.length(); i++) {
            // separate the number into input_nr expected comma must be '.'
            if( (input[i] >= 48 && input[i] <= 57) || input[i]==46) {
                input_nr.push_back(input[i]);
            }
            // separate the unit into input_fmt
            if( input[i] == 'c' || input[i] == 'i' || input[i] == 'f' || input[i] == 'm' || input[i] == 'n' || input[i] == 't') {
                input_fmt.push_back(input[i]);
            }
        }
        // Sanity check, if unit is a valid one ( cm, m, in, ft)
        if (input !="|" && input_fmt != "m" && input_fmt != "cm" && input_fmt != "in" && input_fmt != "ft") {
            std::cout << "Unit is not correct. " << std::endl;
            input_fmt = "invalid";
        }
        //std::cout << input_nr << std::endl;
        //std::cout << input_fmt << std::endl;

        if(input !="|" && input_fmt != "invalid") {
            // Convert input_nr into standard meters, depending on unit 
            if (input_fmt == "cm") {
                input_db.push_back(std::stod(input) / 100);
            }
            else if (input_fmt == "m") {
                input_db.push_back(std::stod(input));
            }
            if (input_fmt == "in") {
                input_db.push_back(std::stod(input) * 0.0254);
            }
            if (input_fmt == "ft") {
                input_db.push_back(std::stod(input) * 0.3048);
            }
            
            // Keep track of smallest nr., largest nr.
            if (input_db[input_db.size() - 1] < smallest_db) {
                smallest_db = input_db[input_db.size() - 1];
                std::cout << smallest_db << " meter is the smallest number so far" << std::endl << std::endl;
            }
            if(input_db[input_db.size() - 1] > largest_db) {
                largest_db = input_db[input_db.size() - 1];
                std::cout << largest_db << " meter is the largest number so far" << std::endl << std::endl;
            }

            // Keep track of sum = summary of values, and cnt = nr. of values entered
            sum += input_db[input_db.size() - 1];
            cnt++;
        }
        else {
            std::cout << cnt << " Values were entered. Total sum is  " << sum << "  meters" << std::endl;
            for ( double n : input_db) {
                std::cout << n << " , ";
            }
            std::cout << std::endl;
        }
    }
}
