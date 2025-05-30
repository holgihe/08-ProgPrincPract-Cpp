#include <iostream>


int main () 
	{
    std::string input = "";
    int cnt = 0;

    while(input != "|") 
		{
        input = "";
        std::cout << "Enter a phrase. (Enter '|' to exit):   ";
        // Read input from cin
        std::getline(std::cin, input);
        for(int i=0; i < input.length(); i++) 
			{
            // Print character & ascii value of each character in the string
            std::cout << input[i] << "  -  ASCII: " << (int)input[i] <<  "\n";
        	}
    	}
	}
