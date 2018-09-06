//break statement exiting a for statement
#include <iostream>
using namespace std;
int main()
{
	unsigned int count; //control variable also used after loop terminates

	for( count = 1; count <= 10; ++count )
	{
		if( count == 5 )
		{
			break; // break loop only if count is 5
		}
		cout << count << " ";
	} // end for

	cout << "\nBroken out of loop at count = " << count << endl;
} // end main