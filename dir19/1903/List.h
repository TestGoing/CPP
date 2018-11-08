#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "ListNode.h"

template<typename NODETYPE>
class List
{
public:
	List(): firstPtr(nullptr), lastPtr(nullptr)
	{

	}
	~List()
	{
		if(!isEmpty())
		{
			std::cout << "Destroying nodes ...\n";
			ListNode<NODETYPE>* currentPtr = firstPtr;
			ListNode<NODETYPE>* tempPtr = nullptr;

			while(currentPtr != nullptr)
			{
				tempPtr = currentPtr;
				std::cout << tempPtr->data << '\n';
				currentPtr = currentPtr->nextPtr;
				delete tempPtr;
			}
		}
		std::cout << "All nodes destroyed\n\n";
	}

	//insert node at back of list
	void insertAtFront(const NODETYPE & value)
	{
		ListNode<NODETYPE>* newPtr = getNewNode(value);
		if(isEmpty())
			firstPtr = lastPtr = newPtr;
		else
		{
			newPtr->nextPtr = firstPtr;
			firstPtr = newPtr;
		}
	}

	//insert node at back of list
	void insertAtBack(const NODETYPE & value)
	{
		ListNode<NODETYPE>* newPtr = getNewNode(&value);
		if(isEmpty())
			firstPtr = lastPtr = newPtr;
		else
		{
			lastPtr->nextPtr = newPtr;
			lastPtr = newPtr;
		}
	}

	//delete node from front of list
	bool removeFromFront(NODETYPE & value)
	{
		if(isEmpty())
			return false;
		else
		{
			ListNode<NODETYPE>* tempPtr = firstPtr;
			if(firstPtr == lastPtr)
				firstPtr = lastPtr = nullptr;
			else
				firstPtr = firstPtr->nextPtr;

			value = tempPtr->data; //return data being removed
			delete tempPtr;
			return true;
		}
	}

	//delete node from back of list
	bool removeFromBack(NODETYPE & value)
	{
		if(isEmpty())
			return false;
		else
		{
			ListNode<NODETYPE>* tempPtr = lastPtr;

			if(firstPtr == lastPtr)
				firstPtr = lastPtr = nullptr;
			else
			{
				ListNode<NODETYPE>* currentPtr = firstPtr;
				while(currentPtr->nextPtr != lastPtr)
					currentPtr = currentPtr->nextPtr;

				lastPtr = currentPtr;
				currentPtr->nextPtr = nullptr;
			}
			value = tempPtr->data;
			delete tempPtr;
			return true;
		}
	}


	bool isEmpty() const
	{
		return firstPtr == nullptr;
	}

	//display contents of List
	void print() const
	{
		if(isEmpty())
		{
			std::cout << "The list is empty\n\n";
			return;
		}

		ListNode<NODETYPE>* currentPtr = firstPtr;
		std::cout << "The list is ";
		while(currentPtr != nullptr)
		{
			std::cout << currentPtr->data << ' ';
			currentPtr = currentPtr->nextPtr;
		}
		std::cout << "\n\n";
	}


private:
	ListNode<NODETYPE>* firstPtr;
	ListNode<NODETYPE>* lastPtr;

	//utility function to allocate new node
	ListNode<NODETYPE>* getNewNode(const NODETYPE & value)
	{
		return new ListNode<NODETYPE>(value);
	}
};

#endif