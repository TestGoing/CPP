/*
cin.get()或者cin.get(char)遇到[enter],[space],[tab]时，都看做为字符，不丢弃
*/
#include <iostream>

using namespace std;

int main()
{
	char a,b,c,d;
	a=cin.get();
	b=cin.get();
	c=cin.get();
	d=cin.get();
	cout<<int(a)<<','<<int(b)<<','<<int(c)<<','<<int(d)<<endl;
}