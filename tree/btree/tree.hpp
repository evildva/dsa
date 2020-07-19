#ifndef __TREE_HPP__
#define __TREE_HPP__

#include <iostream>

namespace Tree
{

class tree_node
{
private:
	int value = 0;
	tree_node* left = NULL;
	tree_node* right = NULL;
}

class tree
{
private:
	tree_node* root = NULL;
	int nodes = 0;

public:
	tree()
	{
		root = new tree_node();
	}

	~tree()
	{
		delete root;
	}

	void q(tree_node* rt)
	{
		if(rt == NULL)
			return;
		if( (rt->left == NULL) && (rt->right == NULL) )
			return;
		cout<< rt->value << " ";

		q(rt->left);
		q(rt->right);
	}

	void z(tree_node* rt)
	{
		if(rt == NULL)
			return;
		if( (rt->left == NULL) && (rt->right == NULL) )
			return;

		z(rt->left);
		cout<< rt->value << " ";
		z(rt->right);
	}

	void h(tree_node* rt)
	{
		if(rt == NULL)
			return;
		if( (rt->left == NULL) && (rt->right == NULL) )
			return;

		h(rt->left);
		h(rt->right);
		cout<< rt->value << " ";
	}

	void insert(tree_node* rt,int value)
	{
		if(rt->value == 0)
		{
			rt->value = value;
			return;
		}

		if(rt->value > value)
		{
			insert(rt->left,value);
			return;
		}

		if(rt->value < value)
		{
			insert(rt->right,value);
			return;
		}
	}
};

}

#endif