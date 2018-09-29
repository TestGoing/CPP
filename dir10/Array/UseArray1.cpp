//Single-argument constructors and implicit conversions
#include <iostream>
#include "Array.h"

using namespace std;
void outputArray( const Array & );

int main()
{
	Array integer1( 7 );
	outputArray( integer1 );
	outputArray( 3 );
}

void outputArray( const Array & arrayToOutput )
{
	cout << "The Array receive has " << arrayToOutput.getSize()
	     << " elements. The contents are:\n" << arrayToOutput << endl;
}