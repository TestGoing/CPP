// Initializing an array's elements to zeros and printing the array
#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
	array< int, 5 > n; // n is an array of 5 int values

	// initialize elements of array n to 0
	for( size_t i = 0; i < n.size(); ++i )
		n[i] = 0;

	cout << "Element" << setw( 13 ) << "value" << endl;

	// output each array element's value
	for( size_t j = 0; j < n.size(); ++j )
		cout << setw( 7 ) << j << setw( 13 ) << n[j] << endl;
}

//g++ 0703.cpp -o 0703 -std=gnu++11