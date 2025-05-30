/*
// TODO Add holgihe sourcecode header MIT
// TODO Remove include algorithm
// BUG  Here is an bug find it ! fs
 */

#include <iostream>
#include <vector>
/*import std;  */

//using std::ranges::sort;

using namespace std;

int main () 
	{
	vector<double> temps; 
	cout << "03-Excercise-04 - Distance between Cities\n";
    cout << "Enter distances separated by Enter. Finish with ctrl-D.\n";
	for(double temp; cin>>temp;)         // read into temp
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
	cout << "Mean Distance: " << sum/temps.size() << '\n';
	}
