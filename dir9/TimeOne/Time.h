// Time class definition
// Member functions are defined in Time.cpp

// prevent multiple inclusions of header
#ifndef TIME_H
#define TIME_H
class Time
{
public:
	Time(); //constructor
	void setTime( int, int, int );
	void printUniversal()const;
	void printStandard()const;
private:
	unsigned int hour; // 0 - 23 (24-hour clock format)
	unsigned int minute; // 0 - 59
	unsigned int second;  // 0-59
};
#endif