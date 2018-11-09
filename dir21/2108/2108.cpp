//Demonstrating class string insert member functions.
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string string1("beginning end");
	string string2("middle");
	string string3("12345678");
	string string4("xyz");

	cout << "Initial strings:\nstring1: " << string1
	     << "\nstring2: " << string2 << "\nstring3: " << string3
	     << "\nstring4: " << string4 << "\n\n";

	string1.insert(10, string2);

	string3.insert(3, string4, 0, string::npos);
	cout << "Strings after insert:\nstring1: " << string1
	     << "\nstring2: " << string2 << "\nstring3: " << string3
	     << "\nstring4: " << string4 << endl;
}