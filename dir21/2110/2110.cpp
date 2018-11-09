//using namespace std;
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string string1("Testing iterators");
	string::const_iterator iterator1 = string1.begin();

	cout << "string1 = " << string1
	     << "\n(Using iterator iterator1) string1 is: ";

	cout<<endl;
	cout<<"use for:\n";	   
	for(char c: string1)
		cout<<c;
	cout<<endl;
	
	//iterate through string
	while(iterator1 != string1.end())
	{
		cout << *iterator1;
		++iterator1;
	}
	cout << endl;
}