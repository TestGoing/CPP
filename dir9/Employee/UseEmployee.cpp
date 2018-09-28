#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
	cout << "Number of employees before instantiation of any objects is "
	     << Employee::getCount() << endl; //use classname

	//the following scope creates and destroys
	//Employee objects before main terminates
	{
		Employee e1( "Susan", "Baker" );
		Employee e2( "Robert", "Jones" );
		cout << "Number of employees after objects are instantiated is "
		     << Employee::getCount();

		cout << "\n\nEmployee 1: "
		     << e1.getFirstName() << " " << e1.getLastName()
		     << "\nEmployee 2: "
		     << e2.getFirstName() << " " << e2.getLastName() << "\n\n";
	}

	cout << "\nNUmber of employees after objects are deleted is "
	     << Employee::getCount() << endl;
	return 0;
}