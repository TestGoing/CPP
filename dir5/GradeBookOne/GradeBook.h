//GradeBook class definition that counts letter grades
//Member functions are defined in GradeBook.cpp
#include <string>

class GradeBook
{
public:
	explicit GradeBook( std::string );
	void setCourseName( std::string );
	void displayMessage() const;
	void inputGrades();
	void displayGradeReport()const;
private:
	std::string cousrName;
	unsigned int aCount;
	unsigned int bCount;
	unsigned int cCount;
	unsigned int dCount;
	unsigned int fCount;
};