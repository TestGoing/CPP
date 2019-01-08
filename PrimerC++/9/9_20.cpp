//从一个list<int> 拷贝元素到两个deque中.值为偶数的所有元素都拷贝到一个deque中,
//而奇数值元素拷贝到另一个deque中.

//遍历list<int>,可检查其中每个元素的奇偶性,并用push_back分别添加到
//目的deque的末尾.程序中用位与运算检查元素最低位的值,若为1,表明是奇数
//否则为偶数

#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main()
{
	list<int> ilist = {1, 2, 3, 4, 5, 6, 7, 8};
	deque<int> odd_d, even_d; //odd奇数的deque

	//遍历list
	for (auto iter = ilist.cbegin(); iter != ilist.cend(); iter++)
		if (*iter & 1)
			odd_d.push_back(*iter);
		else
			even_d.push_back(*iter);

	cout << "奇数值有: ";
	for (auto iter = odd_d.cbegin(); iter != odd_d.cend(); iter++)
		cout << *iter << " ";
	cout << endl;

	cout << "偶数值有:";
	for (auto iter = even_d.cbegin(); iter != even_d.cend(); iter++)
		cout << *iter << " ";
	cout << endl;

	return 0;
}