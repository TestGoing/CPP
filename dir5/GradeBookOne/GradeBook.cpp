//Member-function definitions for class GradeBook that
//uses a switch statement to count A, B, C, D and F grades.
#include <iostream>
#include <cstdio>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook( string name )
	: aCount( 0 ), bCount( 0 ), cCount( 0 ), dCount( 0 ), fCount( 0 )
{
	setCourseName( name );
}
void GradeBook::setCourseName( string name )
{
	if( name.size() <= 25 )
	{
		courseName = name;
	}
	else
	{
		courseName = name.substr( 0, 25 );
		cerr << "Name \"" << name << "\" exceeds maximum length (25).\n"
		     << "Limiting courseName to first 25 characters.\n" << endl;
	}
}

string GradeBook::getCourseName() const
{
	return courseName;
}

void GradeBook::displayMessage() const
{
	cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
	     << endl;
}

void GradeBook::inputGrades()
{
	int grade;
	cout << "Enter the letter grades." << endl
	     << "Enter the EOF characters to end input." << endl;
	while( ( grade = cin.get() ) != EOF )
	{
		switch( grade )
		{
			case 'A':
			case 'a':
				++aCount;
				break;
			case 'B':
			case 'b':
				++bCount;
				break;
			case 'C':
			case 'c':
				++cCount;
				break;
			case 'D':
			case 'd':
				++dCount;
				break;
			case 'F':
			case 'f':
				++fCount;
				break;
			case '\n': // ignore newline
			case '\t': // ignore tabs
			case ' ' : // ignore spaces in input
				break;
			default:
				cout << "Incorrect letter grade entered."
				     << "Enter a new grade." << endl;
				break;
		}
	}
}

void GradeBook::displayGradeReport() const
{
	cout << "\n\nNumber of students who received each letter grade:"
	     << "\nA: " << aCount
	     << "\nB: " << bCount
	     << "\nC: " << cCount
	     << "\nD: " << dCount
	     << "\nF: " << fCount
	     << endl;
}