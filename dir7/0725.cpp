// Demonstrating C++ Standard Library class template vector
#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>

using namespace std;

void outputVector( const vector<int> & ); // display the vector
void inputVector( vector<int> & ); // input values into the vector

int main()
{
	vector<int> integers1( 7 );
	vector<int> integers2( 10 );

	cout << "Size of vector integers1 is " << integers1.size()
	     << "\nvector after initialization:" << endl;
	outputVector( integers1 );

	cout << "Size of vector intergers2 is " << integers2.size()
	     << "\nvector after initialization:" << endl;
	outputVector( integers2 );
	cout << "\nEnter 17 integers:" << endl;
	inputVector( integers1 );
	inputVector( integers2 );

	cout << "\nAfter input, the vectors contain:\n"
	     << "integers1:" << endl;
	outputVector( integers1 );
	cout << "integers2:" << endl;
	outputVector( integers2 );

	cout << "\nEvaluating: integers1 != integers2" << endl;
	if( integers1 != integers2 )
		cout << "integers1 and integers2 are not equal" << endl;

	vector<int> integers3( integers1 ); // copy constructor

	cout << "\nSize of vector integers3 is " << integers3.size() << "\nvector after initialization:" << endl;
	cout << "\nAssigning integers2 to integers1:" << endl;
	integers1 = integers2;

	cout << "integers1:" << endl;
	outputVector( integers1 );
	cout << "integers2" << endl;
	outputVector( integers2 );

	cout << "\nEvaluating: integers1 == integers2" << endl;
	if(integers1 == integers2 )
		cout << "integers1 and integers2 are equal" << endl;
	cout << "\nintegers1[5] is " << integers1[5];

	cout << "\n\nAssigning 1000 to integers1[5]" << endl;
	integers1[5] = 1000;
	cout << "integers1:" << endl;
	outputVector( integers1 );

	try
	{
		cout << "\nAttempt to display integers1.at(15)" << endl;
		cout << integers1.at( 15 ) << endl;
	}
	catch( out_of_range & ex )
	{
		cerr << "An exception occurred: " << ex.what() << endl;
	}

	cout<<"\nCurrent integers3 size is: "<<integers3.size()<<endl;
	integers3.push_back(1000);
	cout<<"New integers3 size is: "<<integers3.size()<<endl;
	cout<<"integers3 now contains: ";
	outputVector(integers3);
}

void outputVector( const vector<int> & array )
{
	for( int item : array )
		cout << item << " ";
	cout << endl;
}

void inputVector( vector<int> & array )
{
	for( int & item : array )
		cin >> item;
}