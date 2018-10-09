//Printfing the address in a char * variable.
#include <iostream>
using namespace std;

int main()
{
	const char * const word = "again";
	//display value of char * ,then display value of cahr *
	//aftrer a static_cast to void *
	cout << "Value of word is: " << word << endl
	     << "Value of static_class<const void*>(word) is: "
	     << static_cast<const void *>( word ) << endl;
}