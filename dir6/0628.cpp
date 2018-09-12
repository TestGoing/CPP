// Recursive function factorial.
#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial( unsigned long number ); // function prototype

int main()
{
	// calculate the factorials of 0 throuth 10
	for( unsigned int counter = 0; counter <= 10; ++counter )
		cout << setw( 2 ) << counter << "! = " << factorial( counter )
		     << endl;
}

// recursive definition of function factorial
unsigned long factorial( unsigned long number )
{
	if( number <= 1 )
		return 1;
	else
		return number * factorial( number - 1 );
}