// Pointer operators & and *.

#include <iostream>
using namespace std;

int main()
{
	int * aPtr = nullptr;
	int a = 7;
	aPtr = &a;

	cout << "The address of a is " << &a
	     << "\nThe value of aPtr is " << aPtr;
	cout << "\n\nThe value of a is " << a
	     << "\nThe value of *aPtr is " << *aPtr << endl;
}