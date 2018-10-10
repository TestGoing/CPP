//Floating-point values displayed in system default.
//scientific and fixed fromats.


#include <iostream>
using namespace std;

int main()
{
	double x = 0.001234567;
	double y = 1.946e9;

	cout << "Display in default format:" << endl
	     << x << '\t' << y << endl;

	cout << "\nDisplayed in scientific format:" << endl
	     << scientific << x << '\t' << y << endl;

	cout << "\nDisplay in fixed format:" << endl
	     << fixed << x << '\t' << y << endl;
}