// Passing arguments by value and by reference

#include <iostream>
using namespace std;

int squareByValue( int );
void squareByReference( int & );

int main()
{
	int x = 2; // value to square using squareByValue
	int z = 4; // value to square using squareByReference

	// demonstrate squareByValue

	cout << "x= " << x << " before squareByValue\n";
	cout << "Value retruned by squareByValue: "
	     << squareByValue( x ) << endl;
	cout << "x= " << x << " after squareByValue\n" << endl;

	// demonstrate squareByReference
	cout << "z = " << z << " before squareByReference" << endl;
	squareByReference( z );
	cout << "z = " << z << " after squareByReference" << endl;
}

//squareByValue multiplies number by itself,stores the
//result in number and returns the new value of number

int squareByValue( int number )
{
	return number *= number;
}

//squareByReference multiplies numberRef by itself and stores the result
//in the variable to which numberRef refers in function main
void squareByReference( int & numberRef )
{
	numberRef *= numberRef;
}
