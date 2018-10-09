/*
  结束条件：[enter],[space],[tab]

  处理方法：cin遇到缓冲区中的[enter],[space],[tab]会结束当前输入，并舍弃[enter],[space],[tab]，
  继续下一项输入，当有连续[space],[enter],[tab]会全部舍弃。

 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char testchar='a';
	char a[10],b[10];
	cin>>a;cin>>b;//当读入数据到b时，舍弃[enter]
	cout<<a<<endl<<b<<endl;//此时结束输入的的[enter]还在缓冲区中
	cout.put(testchar);
	cin.get(testchar);
	cout.put(testchar);
	return 0;
}

/*
综上：cin的输入很简单，整体的看输入，遇到[enter],[space],[tab]表示当前输入结束，
下一个输入从非[enter],[sapce],[tab]开始，两输入间无线多个[space][]enter[tab]都是无效的
*/