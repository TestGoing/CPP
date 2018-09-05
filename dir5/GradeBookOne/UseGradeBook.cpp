// Creating a GradeBook object and calling its member function
#include "GradeBook.h"

int main()
{
	GradeBook myGradeBook( "CS101 C++ Programming" );
	myGradeBook.displayMessage();
	myGradeBook.inputGrades();
	myGradeBook.displayGradeReport();
}