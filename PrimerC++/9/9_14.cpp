// 将一个list中的char* 指针(指向C风格字符串)元素赋值给一个vector的string
#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	list<const char*> slist = {"hello", "world", "!"};
	vector<string> svec;
	//容器类型不同,不能直接赋值
	//svec=slist
	//元素类型相容,可以采用范围赋值
	svec.assign(slist.begin(), slist.end());
	cout << svec.capacity() << " " << svec.size() << " "
	     << svec[0] << " " << svec[svec.size() - 1] << endl;

	return 0;
}