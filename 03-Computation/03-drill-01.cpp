#include <iostream>
#include <string>

int main () 
{
	std::string input1 = "";
	std::string input2 = "";
    double number99 = 123.456;

    while(input1 != "|")
	{
        std::cout << "New QTCreator. Enter first number. Enter '|' to exit:    " << std::endl;
		std::cin >> input1;
		if(input1 !="|") 
		{
			std::cout << "Second number:  " << std::endl;
			std::cin >> input2;
			std::cout << "1.Number is " << std::stoi(input1) << ", ";
            std::cout << "2.Number is " << std::stoi(input2) << std::endl;
		}
	}
	while(input1 !="|")
	{
		if(1)
		{
            std::cout << "Just added for testing emacs indentation style with tabs and width 4. New";
		}
    }
}
