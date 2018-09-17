// GradeBook class member functions manipulating
//Definition of class GradeBook that an array to store test grades.
// Member functions are defined in GradeBook.cpp
#include <string>
#include <array>


// GradeBook class definition
class GradeBook
{
public:
	// const -- number of students who took the test
	static const size_t students = 10;

	// constructor initializes course name and array of grades
	GradeBook( const std::string &, const std::array<int, students> & );

	void setCourseName( const std::string & ); // set the course name
	std::string getCourseName() const; // retrieve the course name
	void displayMessage() const; // display a welcome message
	void processGrades() const; // perform operation on the grade data
	int getMinimum() const; // find the minimum grade for the test
	int getMaximum() const; // find the maximum grade for the test
	double getAverage() const; // determine the average grade for test
	void outputBarChart() const; // output bar chart of grade distribution
	void outputGrades() const; //output the contents of the grades array
private:
	std::string courseName; // course name for this grade book
	std::array<int, students> grades;
};