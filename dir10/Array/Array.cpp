//Array class member-and friend-function definitions
#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "Array.h" //Array class definitions

using namespace std;

//default constructor for class Array(defalut size 10)
Array::Array( int arraySize )
	: size( arraySize > 0 ? arraySize :
	        throw invalid_argument( "Array Size must be greater than 0" ) ),
	  ptr( new int[size] )
{
	for( size_t i = 0; i < size; ++i )
		ptr[i] = 0; //set pointer-based array element
}

//copy constructor for class Array;
//must receive a reference to Array
Array::Array( const Array & arrayToCopy )
	: size( arrayToCopy.size ), ptr( new int[size] )
{
	for( size_t i = 0; i < size; ++i )
		ptr[i] = arrayToCopy.ptr[i];
}

//destructor for class Array
Array::~Array()
{
	delete [] ptr; //release pointer-based array space
}

size_t Array::getSize() const
{
	return size; //number of elements in Array
}

//const return avoids: (a1=a2)=a3
const Array & Array::operator= ( const Array & right )
{
	if( &right != this )
	{
		//for Arrays of different sizes,deallocate original
		//left-side Array,then allocate new left-side Array
		if( size != right.size )
		{
			delete [] ptr;
			size = right.size;
			ptr = new int[size];
		}
		for( size_t i = 0; i < size; ++i )
		{
			ptr[i] = right.ptr[i];
		}
	}
	return *this;
}

//determine if two Arrays are equal and
// return true,otherwise return false
bool Array::operator== ( const Array & right )const
{
	if( size != right.size )
		return false;

	for( size_t i = 0; i < size; ++i )
		if( ptr[i] != right.ptr[i] )
			return false;

	return true;
}

//overloaded subscript operator for non-const Array
//reference return creats a modifiable lvalue
int & Array::operator[]( int subscript )
{
	//check for subscrip out-of-range error
	if( subscript < 0 || subscript >= size )
		throw out_of_range( "Subscript out of range" );

	return ptr[subscript];
}

//overload subscript operator for const Arrays
//const reference return creats an rvalue
int  Array::operator[]( int subscript ) const
{
	//check for subscript out-of-range error
	if( subscript < 0 || subscript >= size )
		throw out_of_range( "Subscript out of range" );

	return ptr[subscript];
}

//overloaded input operator for class Array
//inputs values for entire Array

istream & operator>> ( istream & input, Array & a )
{
	for( size_t i = 0; i < a.size; ++i )
		input >> a.ptr[i];

	return input;
}

//overloaded output operator for class Array
ostream & operator<< ( ostream & output, const Array & a )
{
	for( size_t i = 0; i < a.size; ++i )
	{
		output << setw( 12 ) << a.ptr[i];
		if( ( i + 1 ) % 4 == 0 )
			output << endl;
	}
	if( a.size % 4 != 0 )
		output << endl;
	return output;
}

