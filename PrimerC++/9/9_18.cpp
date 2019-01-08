//编写程序,从标准输入读取string序列,存入一个deque中.编写一个循环,用
//迭代器打印deque中的元素
//对deque来说,在首尾添加新元素性能最佳,在中间位置插入新元素性能很差

#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<string> sd;

	string word;
	while(cin>>word) //读取字符串,直至遇到文件结束符
		sd.push_back(word);

	//用cbegin()获取deque首元素迭代器,遍历deque中所有元素
	for(auto si=sd.cbegin(); si!=sd.cend();si++)
	{
		cout<<*si<<endl;
	}
	return 0;
}