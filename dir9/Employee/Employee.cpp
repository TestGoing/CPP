#include <iostream>
#include "Employee.h"
using namespace std;

//define and initialize static data member at global namespace scope
unsigned int Employee::count = 0; //cannot include keyword static

//define static 	member function that returns number of
//Employee objects instaiated(declared static in Employee.h)
unsigned int Employee::getCount()
{
	return count;
}

//constructor initializes non-static data members and
//increments static data member count
Employee::Employee( const string & first, const string & last )
	: firstName( first ), lastName( last )
{
	++count; //increment static count of employees
	cout << "Employee constructor for " << firstName
	     << ' ' << lastName << " called." << endl;
}

Employee::~Employee()
{
	cout << "~Employee() called for " << firstName << ' ' << lastName << endl;
	--count;
}

string Employee::getFirstName() const
{
	return firstName;
}

string Employee::getLastName() const
{
	return lastName;
}