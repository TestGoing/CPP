#include <iostream>

using namespace std;

int main()
{
	int a[10]= {0};

	int *p1=a+2;
	int *p2=a+3;

	cout<<p2-p1<<endl;
}