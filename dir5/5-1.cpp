//gcc 5-1.cpp -o 5-1
//Counter-controlled repetition
#include <iostream>
using namespace std;

int main()
{
	unsigned int counter = 1; //declare and initialize control variable

	while( counter <= 10 ) // loopp-continuation condition
	{
		cout << counter << " ";
		++counter; // increment control variable by 1
	} // end while

	cout << endl; // output a newline
} // end main