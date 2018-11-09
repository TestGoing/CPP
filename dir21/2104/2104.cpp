//Using the swap function to swap two strings
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string first("one");
	string second("two");

	cout << "Before swap:\n first: " << first << "\nsecond: " << second;

	first.swap(second);
	cout << "\n\nAfter swap:\n first: " << first
	     << "\nsecond: " << second << endl;
}