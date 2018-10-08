//Aiming base-class and derived-class pointers at base-class
//and derived-class objects, respectively
#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

int main()
{
	CommissionEmployee commissionEmployee(
	   "Sue", "Jones", "222-22-2222", 10000, .06 );

	CommissionEmployee * commissionEmployeePtr = nullptr;

	BasePlusCommissionEmployee basePlusCommissionEmployee(
	   "Bob", "Lewis", "333-33-3333", 5000, .04, 300 );
	BasePlusCommissionEmployee *basePlusCommissionEmployeePtr = nullptr;

	cout<<fixed<<setprecision(2);

	cout<<"Print base-class and derived-class objects:\n\n";
	commissionEmployee.print();
	cout<<"\n\n";
	basePlusCommissionEmployee.print();

	commissionEmployeePtr = &commissionEmployee;
	commissionEmployeePtr->print();

	basePlusCommissionEmployeePtr = &basePlusCommissionEmployee;
	basePlusCommissionEmployeePtr->print();

	//aim base-class pointer at derived-class object and print 
	commissionEmployeePtr = &basePlusCommissionEmployee;
	cout<<"\n\n\nCalling print with base-class pointer to "
	<<"derived-class object\ninvokes base-class print "
	<<"function on that derived-class object:\n\n";
	commissionEmployeePtr->print(); //invoke base-class print
	cout<<endl;
}