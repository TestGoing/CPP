//Cascading member function calls
//Time class definition
//Member functions defined in Time.cpp

#ifndef TIME_H
#define TIME_H

class Time
{
public:
	explicit Time( int = 0, int = 0, int = 0 ); //default constructor
	
	//set function (the Time & return types enable cascading)
	Time & setTime( int, int, int );
	Time & setHour( int );
	Time & setMinute( int );
	Time & setSecond( int );

	//get function (normally declared const)
	unsigned int getHour() const;
	unsigned int getMinute() const;
	unsigned int getSecond() const;

	//print function (normally declared const)
	void printUniversal() const;
	void printStandard() const;
private:
	unsigned int hour; //0-23 (24-hour clock format)
	unsigned int minute; //0-59
	unsigned int second; //0-59
};
#endif