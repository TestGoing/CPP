#include <iostream>

using namespace std;

int main()
{
	const char *cp="";
	if(cp && *cp)
		cout<<"OK"<<endl;
	else
		cout<<"FAIL"<<endl;
}