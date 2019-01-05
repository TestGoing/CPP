//常量指针
// #include <iostream>
// using namespace std;
// int main()
// {
// 	int * const p = new int; //常量指针
// 	//p++;//报错
// 	*p=23;
// 	*p=32;
// 	return 0;
// }

//指向常量的指针
#include <iostream>
using namespace std;
int main()
{
	const int *p = new int;
	p++;
	*p=23;
	return 0;
}