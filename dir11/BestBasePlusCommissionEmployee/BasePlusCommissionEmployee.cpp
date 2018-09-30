//Class BasePlusCommissionEmployee member-function definition

#include <iostream>
#include <stdexcept>
#include "BasePlusCommissionEmployee.h"

using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
   const string & first, const string & last, const string & ssn,
   double sales, double rate, double salary )
	: CommissionEmployee( first, last, ssn, sales, rate ) //explicitly call base-class constructor
{
	setBaseSalary( salary ); //validate and store base salary
}

void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
	if( salary >= 0.0 )
		baseSalary = salary;
	else
		throw invalid_argument( "Salary must be >= 0.0" );
}

double BasePlusCommissionEmployee::getBaseSalary()const
{
	return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const
{
	return getBaseSalary() + CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print() const
{
	cout << "base-salaried ";

	CommissionEmployee::print();
	cout << "\nbase salary: " << getBaseSalary();
}




