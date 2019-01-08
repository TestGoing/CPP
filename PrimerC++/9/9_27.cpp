//查找并删除forward_list<int>中的奇数元素
//forward_list其实是单向链表结构,只有前驱节点指向后续节点的指针,而没有反向的指针.
//forward_list可以高效地从前驱转到后继,但无法从后继转到前驱.当删除一个元素后,应该
//调整被删元素的前驱指针指向被删元素的后继,起到该元素从链表中是删除的效果.
//所以,在forward_list中插入,删除元素即需要该元素的迭代器,也需要前驱迭代器.
//为此,forward_list提供了before_begin来获取首元素之前位置的迭代器,
//且插入,删除都是after形式,即,删除(插入)给定迭代器的后继

#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
	forward_list<int> iflst = {1,2,3,4,5,6,7,8};

	auto prev = iflst.before_begin(); //前驱元素
	auto curr = iflst.begin(); //当前元素

	while(curr!=iflst.end())
	{
		if(*curr & 1)
		{
			curr = iflst.erase_after(prev);
		}
		else
		{
			prev = curr;
			curr++;
		}
	}

	for(curr = iflst.begin(); curr!=iflst.end();curr++)
		cout<<*curr<<" ";
	cout<<endl;

	return 0;
}