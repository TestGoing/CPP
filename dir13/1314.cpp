#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int x = 12345;

	//display x right justified(default)
	cout << "Default is right justified:" << endl
	     << setw( 10 ) << x;

	//use left manipulator to display x left justified
	cout << "\n\nUse std::left to left justify x:\n"
	     << left << setw( 10 ) << x;

	//use right manipulator to display x right justified
	cout << "\n\nUse std::right to right justify x:\n"
	     << right << setw( 10 ) << x << endl;
}