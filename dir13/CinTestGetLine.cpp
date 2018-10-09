/*
cin.getline(arrayname,size,s)当遇到s时会结束输入，但会从输入流中读取s，然后删除s
 */
#include <iostream>
using namespace std;

int main()
{
	char a[10], b;
	cin.getline(a,10);
	cin.get(b);
	cout<<a<<endl<<b;
}