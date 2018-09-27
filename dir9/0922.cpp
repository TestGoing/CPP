//Friends can access private members of a class

#include <iostream>
using namespace std;

//Count class definition
class Count
{
	friend void setX( Count &, int ); //friend declaration
public:
	Count(): x( 0 ) //initialize x to 0
	{
	}
	void print() const
	{
		cout << x << endl;
	}
private:
	int x; // data member
};

//function setX can modify private data of Count
//because setX is declared as a friend of Count
void setX( Count & c, int val )
{
	c.x=val;
}

int main()
{
	Count counter;
	cout<<"counter.x after instantiation: ";
	counter.print();
	setX(counter,8);
	cout<<"counter.x after call to setX friend function: ";
	counter.print();
}