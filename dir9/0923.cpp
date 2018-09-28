//Using the this pointer to refer to object members.

#include <iostream>
using namespace std;

class Test
{
public:
	explicit Test( int = 0 ); //default constructor
	void print() const;
private:
	int x;
};

Test::Test( int value )
	: x( value )
{

}

void Test::print() const
{
	//implicitly use the this pointer to access the member x
	cout << "	x = " << x;
	//explicitly use the this pointer and the arrow operator
	//to access the member x
	cout << "\n  this->x = " << this->x;

	//explicitly use the dereferenced this pointer and 
	//the dot operator to access the member x
	cout<<"\n(*this).x = " << (*this).x << endl;
}

int main()
{
	Test testObject(12);
	testObject.print();
}