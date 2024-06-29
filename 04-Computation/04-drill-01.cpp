#include <iostream>
#include <string>

int main () 
{
	std::string input1 = "";
	std::string input2 = "";
	while(input1 != "|") 
	{
		std::cout << "Enter first number. Enter '|' to exit:    " << std::endl;
		std::cin >> input1;
		if(input1 !="|") 
		{
			std::cout << "Second number:  " << std::endl;
			std::cin >> input2;
			std::cout << "1.Number is " << std::stoi(input1) << ", ";
			std::cout << "2.Number is " << std::stoi(input2) << std::endl;
		}
	}
}