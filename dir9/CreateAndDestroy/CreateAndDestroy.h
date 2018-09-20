// CreateAndDestroy class definition
// Member function defined in CreateAndDestroy.cpp

#include <string>
using namespace std;

#ifndef CREATE_H
#define CREATE_H

class CreateAndDestroy
{
public:
	CreateAndDestroy( int, string ); // constructor
	~CreateAndDestroy(); //destructor
private:
	int objectID;
	string message;
};
#endif