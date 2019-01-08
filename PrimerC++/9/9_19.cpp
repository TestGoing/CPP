//编写程序,从标准输入读取string序列,存入一个list中.编写一个循环,用
//迭代器打印list中的元素
//对list来说,在任何位置添加新元素都有很好的性能,遍历操作也能高效完成
#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<string> sl;

	string word;
	while(cin>>word)
		sl.push_back(word);
	for(auto si= sl.cbegin(); si!=sl.cend();si++)
		cout<<*si<<endl;

	return 0;
}