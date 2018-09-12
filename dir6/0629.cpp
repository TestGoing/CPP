// Recursive function fibonacci
#include <iostream>
#include <iomanip>
using namespace std;

unsigned long fibonacci( unsigned long ); // function prototype

int main()
{
	for( unsigned int counter = 0; counter <= 10; ++counter )
		cout << "fibonacci(" << counter << ") = "
		     << fibonacci( counter ) << endl;
}

unsigned long fibonacci( unsigned long number )
{
	if( ( 0 == number ) || ( 1 == number ) )
	{
		return number;
	}
	else
		return fibonacci( number - 1 ) + fibonacci( number - 2 );
}