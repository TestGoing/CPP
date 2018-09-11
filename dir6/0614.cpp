// square function used to demostrate the function
// call stack and activation records

#include <iostream>
using namespace std;

int square( int ); // prototype for function square

int main()
{
	int a = 10;
	cout << a << "squared: " << square( a ) << endl;
}

int square( int x )
{
	return x * x;
}
