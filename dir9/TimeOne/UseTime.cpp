// Program to test class Time.
// NOTE: This file must be compiled with Time.cpp

#include <iostream>
#include <stdexcept>
#include "Time.h"

using namespace std;

int main()
{
	Time t; // instantiate object of class Time

	cout << "The initial universal time is ";
	t.printUniversal();
	cout << "\nthe initial standard time is ";
	t.printStandard();

	t.setTime( 13, 27, 6 );
	cout << "\n\nUniversal time after setTime is ";
	t.printUniversal();
	cout<<"\nStandard time after setTime is ";
	t.printStandard();

	// attempt to set the time with invalid values
	try
	{
		t.setTime( 99, 99, 99 );
	}
	catch(invalid_argument & e)
	{
		cout << "\n\nException: " << e.what() << endl;
	}
	cout << "\n\nAfter attempting invalid setting:"
	     << "\nUniversal time: ";
	t.printUniversal();
	cout << "\nStandard time: ";
	t.printStandard();
	cout << endl;
}