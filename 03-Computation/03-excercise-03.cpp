#include <iostream>
#include <vector>
#include <algorithm>

using std::ranges::sort;

using namespace std;

int main () 
	{
	vector<double> temps; 
	cout << "Hello";               // temperatures
	for(double temp; cin>>temp;)         // read into temp
		   temps.push_back(temp);        // put temp into vector

	// compute mean temperature:
	double sum = 0;
	for (double x : temps)
			sum += x;
	cout << "Average temperature: " << sum/temps.size() << '\n';

	// compute median temperature:
        ::sort(temps);   // sort the temperatur
        cout << "Median temperature: " << temps[temps.size()/2] << '\n';
	}
