// Time class containing a constructor with default arguments
// Member functions defined in Time.cpp

// prevent multiple inclusions of header

#ifndef TIME_H
#define TIME_H

class Time
{
public:
	explicit Time( int = 0, int = 0, int = 0 ); //default constructor

	// set function
	void setTime( int, int, int );
	void setHour( int );
	void setMinute( int );
	void setSecond( int );

	// get function
	unsigned int getHour()const;
	unsigned int getMinute()const;
	unsigned int getSecond()const;

	void printUniversal()const;
	void printStandard() const;
private:
	unsigned int hour;
	unsigned int minute;
	unsigned int second;
};




#endif