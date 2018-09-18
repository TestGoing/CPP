//Pass-by-reference with a pointer argument used to cube a variable's value
#include <iostream>
using namespace std;

void cubeByReference( int * );

int main()
{
	int number = 5;
	cout << "The original value of number is " << number;
	cubeByReference( &number );
	cout << "\nThe new value of number is " << number << endl;
}

void cubeByReference (int * nPtr)
{
	*nPtr = *nPtr * *nPtr * * nPtr;
}