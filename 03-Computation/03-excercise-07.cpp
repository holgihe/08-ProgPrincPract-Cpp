/*
// TODO Not much todo. Wowdie !!
 */

#include <cstring>
#include <iostream>
#include <string>
#include <vector>

int main () 
	{
    std::vector<std::string> numbers {
            "zero", "one", "two", "three", "four", "five",
            "six", "seven", "eight", "nine" };
    std::string input;
    int number {0};

    std::cout << "03-Excercise-07 - Spelling Numbers 0-9\n";
    std::cout << "Enter a number (e.g. '5'), or a word (e.g. 'seven') and I will transform it. \n";
    std::cout << "Enter '|' to end.\n";

    while (input[0] != '|')
        {
        std::cout << ">>>  ";
        std::cin >> input;

        if (input[0]>=48 && input[0]<=57)
            {
            // input done is a numberical 0 upto 9
            number = std::atoi(input.c_str());
            std::cout << ">>>  " << number << " is the number " << numbers[number] << ".\n";
            }
        else
            {
            // input done is a word
                for (int i=0; i<numbers.size();++i)
                    {
                    if (strcmp(numbers[i].c_str(),input.c_str())==0)
                        std::cout << ">>>  " << input << " is the number " << i << ".\n";
                    }
            }
        }
    }
