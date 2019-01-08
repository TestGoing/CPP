//将ia拷贝到一个vector和一个list中.使用但迭代器版本的erase从list中删除奇数元素,
//从vector中删除偶数元素

//当从vector中删除元素时,会导致删除点之后位置的迭代器,引用和指针失效.而
//erase返回的迭代器返回指向删除元素之后的位置.因此,将erase返回的迭代器赋予iiv,
//使其正确向前推进.且尾后位置每个循环步中都用end重新获得

#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
	vector<int> iv;
	list<int>il;

	iv.assign(ia, ia + 11); //将数据拷贝到vector;
	il.assign(ia, ia + 11); //将数据拷贝到list;

	vector<int>::iterator iiv = iv.begin();
	while(iiv!=iv.end())
	{
		if(!(*iiv&1))
		{
			iiv = iv.erase(iiv);
		}
		else
		{
			iiv++;
		}
	}

	list<int>::iterator iil = il.begin();
	while(iil!=il.end())
	{
		if(*iil & 1)
		{
			iil = il.erase(iil);
		}
		else
		{
			iil++;
		}
	}

	for(iiv = iv.begin(); iiv!=iv.end();iiv++)
		cout<<*iiv<<" ";
	cout<<endl;

	for(iil = il.begin(); iil!= il.end();iil++)
		cout<<*iil<<" ";
	cout<<endl;

	return 0;

}