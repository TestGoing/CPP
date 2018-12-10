#include <iostream>

using namespace std;

int fact(int val)
{
	if(val < 0)
		return -1;
	int ret = 1;
	for(int i = 1; i != val+1;++i)
		ret*=i;
	return ret;
}

int main()
{
	cout<<fact(5)<<endl;
}