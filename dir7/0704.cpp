// Initializing an array in a declaration
#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
	// use list initializer to initialize array n
	array<int, 5> n = {32, 27, 64, 18, 95};

	cout << "Element" << setw( 13 ) << "Value" << endl;

	// output each array element's value
	for( size_t i = 0; i < n.size(); ++i )
		cout << setw( 7 ) << i << setw( 13 ) << n[i] << endl;
}

//g++ 0704.cpp -o 0704 -std=gnu++11