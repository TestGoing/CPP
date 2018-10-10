//flags member function
#include <iostream>
using namespace std;

int main()
{
	int integerValue = 1000;
	double doubleValue = 0.0947628;

	//display flag value, int and double values (orginal format)
	cout << "The value of the flags variable is: " << cout.flags()
	     << "\nPrint int and double in original format:\n"
	     << integerValue << '\t' << doubleValue << endl << endl;

	//use cout flags function to save orginal fromat
	ios_base::fmtflags originalFormat = cout.flags();
	cout << showbase << oct << scientific;

	//display flas value, int and double values (new format)
	cout << "The value of the flags variable is: " << cout.flags()
	     << "\nPrint int and double in a new format:\n"
	     << integerValue << '\t' << doubleValue << endl << endl;

	cout.flags(originalFormat);

	cout<<"The restored value of the flags variable is: "
	<<cout.flags()
	<<"\nPrint values in original format again:\n"
	<<integerValue<<'\t'<<doubleValue<<endl;	    	
}