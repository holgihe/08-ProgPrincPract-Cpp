/*
// TODO Add holgihe sourcecode header MIT
// TODO Remove include algorithm
// BUG  Here is an bug find it ! fs
 */

#include <iostream>
#include <vector>


int main () 
	{
    std::vector<double> temps;
    std::cout << "03-Excercise-05 - Number guessing game\n";
    std::cout << "Think a number between 1 and 100. I'll try to guess.\n";

    int guessmin {0};
    int guessmax {100};
    std::string next = "lower";
    std::string answer;

    for (int i=0;i<10;i++)
        {
        while (guessmax-guessmin>2)
            {
            std::cout << "Is the number " << next << " than " << (guessmax-guessmin)/2+guessmin << " ?\n";
            std::cout << "(y)es / (n)o:  ";
            std::cin >> answer;
            if (answer == "y")
                guessmax=(guessmax-guessmin)/2+guessmin;
            else
                guessmin=(guessmax-guessmin)/2+guessmin;
            }
        }

    /*
    for(double temp; std::cin>>temp;)         // read into temp
		   temps.push_back(temp);        // put temp into vector


    // Find biggest / smallest distance between two cities.
    double biggest = 0;
    double smallest = 99999999;
    for (double x : temps)
        {
        if (x > biggest)
            biggest = x;
        if (x < smallest)
            smallest = x;
        }
    std::cout << "Biggest distance between two cities: " << biggest << "\n";
    std::cout << "Smallest distance between two cities: " << smallest << "\n";

    //compute mean distance:
	double sum = 0;
	for (double x : temps)
        sum += x;
    std::cout << "Mean Distance: " << sum/temps.size() << '\n';
    */
    }
