//Stream manipulators boolalpha and noboolalpha
#include <iostream>
using namespace std;

int main()
{
	bool booleanValue  = true;

	cout << "booleanValue is " << booleanValue << endl;

	cout << "booleanValue (after using boolalpha) is "
	     << boolalpha << booleanValue << endl << endl;

	cout << "switch booleanValue and use noboolalpha" << endl;
	booleanValue = false;
	cout << noboolalpha << endl;

	cout << "booleanValue is " << booleanValue << endl;

	cout << "booleanValue (after using boolalpha) is "
	     << boolalpha << booleanValue << endl;
}