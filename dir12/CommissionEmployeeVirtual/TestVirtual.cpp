//Introducing polymorphism,virtual functions and dynamic binding.
#include <iostream>
#include <iomanip>
#include <string>
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"

using namespace std;

int main()
{
	CommissionEmployee commissionEmployee(
	   "Sue", "Jones", "222-22-2222", 10000, .06 );

	CommissionEmployee * commissionEmployeePtr = nullptr;

	BasePlusCommissionEmployee basePlusCommissionEmployee(
	   "Bob", "Lewis", "333-33-3333", 5000, .04, 300 );

	BasePlusCommissionEmployee * basePlusCommissionEmployeePtr = nullptr;

	cout << fixed << setprecision( 2 );

	cout << "Invoking print function on base-class and derived-class "
	     << "\nobjects with static binding\n\n";
	commissionEmployee.print(); //static binding
	cout << "\n\n";
	basePlusCommissionEmployee.print(); //static binding

	//output objects using dynamic binding
	cout << "\n\n\nInvoking print function on base-class and "
	     << "defived-class \nobjects with dynamic binding";
	commissionEmployeePtr = &commissionEmployee;
	cout << "\n\nCalling virtual function print with base-class pointer"
	     << "\nto base-class object invokes base-class"
	     << "print function:\n\n";
	commissionEmployeePtr->print();

	cout<<"\n\n";
	//aim derived-class pointer at derived-class object and print
	basePlusCommissionEmployeePtr = &basePlusCommissionEmployee;
	basePlusCommissionEmployeePtr->print();

	//aim base-class pointer at derived-class object and print
	commissionEmployeePtr = &basePlusCommissionEmployee;
	cout << "\n\nCalling virtual function print with base-class pointer"
	     << "\nto derived-class object invokes derived-class "
	     << "print function:\n\n";

	commissionEmployeePtr->print();
	cout << endl;
	return 0;
}