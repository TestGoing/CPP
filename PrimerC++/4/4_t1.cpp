#include <iostream>

using namespace std;

int main()
{
	int i =0 ,j;
	j=++i;

	cout<<j<<" "<<i<<endl;

	i=0;j=0;
	j=i++;
	cout<<j<<" "<<i<<endl;
}