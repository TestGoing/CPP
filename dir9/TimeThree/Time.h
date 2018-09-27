//Time class declaration
//Member functions defined in Time.cpp
// prevent multiple inclusions of header

#ifndef TIME_H
#define TIME_H

class Time
{
public:
	explicit Time( int = 0, int = 0, int = 0 );
	void setTime( int, int, int );
	unsigned int getHour()const;
	unsigned int & badSetHour( int ); //dangerous reference return
private:
	unsigned int hour;
	unsigned int minute;
	unsigned int second;
};

#endif