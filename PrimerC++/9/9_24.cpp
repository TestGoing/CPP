//分别使用at,下标运算符,front 和begin提取一个vector中的第一个元素.在一个空vector上测试程序;

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> iv;
	cout<<iv.at(0)<<endl;
	cout<<iv[0]<<endl;
	cout<<iv.front()<<endl;
	cout<<*(iv.begin())<<endl;

	return 0;
}