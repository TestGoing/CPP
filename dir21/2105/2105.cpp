//Printing string characteristics
#include <iostream>
#include <string>

using namespace std;

void printStatistics(const string &);

int main()
{
	string string1;
	cout << "Statistics before input:\n" << boolalpha;
	printStatistics(string1);

	//read in only "tomato" from "tomato soup"
	cout << "\n\nEnter a string: ";
	cin >> string1;
	cout << "The string entered was: " << string1;
	cout << "\nStatistics after input:\n";
	printStatistics(string1);

	cin >> string1;
	cout << "\n\nThe remaining is: " << string1 << endl;
	printStatistics(string1);

	string1+="1234567890abcdefghiklmnopqrstuvwxyz1234567890";
	cout<<"\n\nstring1 is now: "<<string1<<endl;
	printStatistics(string1);

	string1.resize(string1.size()+10);
	cout<<"\n\nStats after resizing by (length + 10):\n";
	printStatistics(string1);
	cout<<endl;
}

void printStatistics(const string & stringRef)
{
	cout << "capacity: " << stringRef.capacity() << "nmax size: "
	     << stringRef.max_size() << "\nsize: " << stringRef.size()
	     << "\nlength: " << stringRef.size()
	     << "\nempty: " << stringRef.empty();
}