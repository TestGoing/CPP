#include <iostream>

int main()
{
	int i = 42;
	const int &r1=i;
	const int &r2=42;
	const int &r3 = r1 * 2;
	//int &r4 = r1 * 2;
	i = 43;

	const double pi=3.14;
	const double * cptr = &pi;
	
	constexpr int mf = 20;
	constexpr int limit = mf+1;

	const int ci=0;
	decltype(ci) x=0;

	return 0;

}