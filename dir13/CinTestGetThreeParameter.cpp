/*
用法：cin.get(arrayname,size,s)  把数据输入到arrayname字符数组中，当到达长度size时结束或者遇到字符s时结束
注释：a必须是字符数组，即char a[]l类型，不可为string类型；size为最大的输入长度；s为控制,s还在缓冲区中(输入流)
*/


#include <iostream>

using namespace std;

int main()
{
	char testchar;
	char a[10];
	cin.get(a,10,'.');
//	cin.get(a,10);
	cout<<a;
	cin.get(testchar);
	cout.put(testchar);
}