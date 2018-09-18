// Sizeof operator when used on a built-in array's name
// return the number of bytes in the built-in array.

#include <iostream>
using namespace std;

size_t getSize( double * ); // prototype

int main()
{
	double numbers[20]; // 20 doubles; occupies 160 bytes on our system
	cout << "The number of bytes in the array is " << sizeof( numbers );
	cout << "\nThe number of bytes returned by getSize is " << getSize( numbers ) << endl;
}

size_t getSize( double * ptr )
{
	return sizeof( ptr );
}