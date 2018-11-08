#ifndef LISTNODE_H
#define LISTNODE_H

template <typename NODETYPE> class List;

template <typename NODETYPE>
class ListNode
{
	friend class List<NODETYPE>; //make List a friend
public:
	explicit ListNode(const NODETYPE & info): data(info), nextPtr(nullptr)
	{

	}
	NODETYPE getData()const
	{
		return data;
	}
private:
	NODETYPE data;
	ListNode<NODETYPE>* nextPtr; // next node in list
};

#endif