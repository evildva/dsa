#ifndef __LIST_HPP__
#define __LIST_HPP__

#include <iostream>

namespace List
{

template <typename T>
class node
{
public:
	T* pvalue;
	node<T>* front = NULL;
	node<T>* back = NULL;

public:
	node()
	{
		pvalue = new T[1];
	}

	~node()
	{
		delete [] pvalue;
	}
};

template <typename T>
class list
{
public:
	node<T>* head = NULL;
	node<T>* tail = NULL;

public:
	list()
	{
		head = new node<T>[1];
		tail = new node<T>[1];

		head->back = tail;
		tail->front = head;
	}

	~list()
	{
		delete[] head;
		delete[] tail;
	}

	void push_back(node<T>& n)
	{
		/*
		node<T>* newnode = node<T>();
		*(newnode->pvalue) = *(n->pvalue);
		newnode->back = tail;
		newnode->front = tail->front;
		tail->front->back = newnode;
		tail->front = newnode;
		*/
		n.back = tail;
		n.front = tail->front;
		tail->front->back = &n;
		tail->front = &n;
	}

	void push_front(node<T>& n);//类似 push_back()
	void pop_back(node<T>& n);
	void pop_front(node<T>& n);//逆操作

	bool deleteS(node<T>& n,bool yes_or_no)// true 删除  false 查找  返回true表示删除或找到
	{
		for(node<T>* cur = head;cur->back != tail; cur = cur->back)
		{
			if(*cur->pvalue == *n.pvalue)
			{
				if(yes_or_no)
				{
					cur->front->back = cur->back;
					cur->back->front = cur->front;
				}

				return true;
			}
		}
		return false;
	}

	void print()
	{

		for(node<T>* cur = head->back;cur->back != tail; cur = cur->back)
		{
			std::cout<< *cur->pvalue << " ";
		}

		std::cout<<std::endl;
	}
};

}

#endif