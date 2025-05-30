/*
// New Comment done on 30.May 2025 with CLion
 */

#include <cstring>
#include <iostream>
#include <cmath>

int main () 
	{
    std::cout << "03-excercise-09 - Chess Inventor rice grain calculator\n";

    for (int i {1}; i<=64; ++i)
        {
        std::cout << "On square  " << i << "\t are " << std::pow(2,i-1) << " rice corns. \
            Total until now are " << (std::pow(2,i)-1) << "\n";
        }
    }

