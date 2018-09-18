// Attempting to modify a constant pointer to constant data
#include <iostream>
using namespace std;

int main()
{
	int x = 5, y;
	// ptr is a constant pointer to a constant integer.
	// ptr always points to the same location;the integer
	// at that location cannot be modified.
	const int * const ptr = &x;
	*ptr = 7;
	ptr = &y;
}