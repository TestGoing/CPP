//Overload stream insertion and stream extraction operators
//for class PhoneNumber
#include <iomanip>
#include "PhoneNumber.h"
using namespace std;

//overload stream insertion operator; cannot be
//a member function if we would like to invoke it with
//cout<< somePhoneNumber
//

ostream & operator<< ( ostream & output, const PhoneNumber & number )
{
	output << "(" << number.areaCode << ")"
	       << number.exchange << "-" << number.line;
	return output;
}

//overload stream extraction operator; cannot be
//a member function if we would like to invoke it with
//cin >> somePhoneNumber;
istream & operator>>( istream & input, PhoneNumber & number )
{
	input.ignore(); //skip (
	input >> setw(3) >> number.areaCode;
	input.ignore(2); //skip ) and space
	input>>setw(3)>>number.exchange;
	input.ignore(); //skip dash(-)
	input>>setw(4)>>number.line; //input line
	return input;
}	