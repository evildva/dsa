#ifndef __BSTREE_HPP__
#define __BSTREE_HPP__

#include <utility>
#include <iostream>
#include <string>

namespace Bstree
{

class bstree_node
{
private:
	std::pair<int,std::string> p;
	bstree_node* left;
	bstree_node* right;

public:
	bstree_node(int key,std::string value,bstree_node* l,bstree_node* r)
	{
		p.first = key;
		p.second = value;
		left = l;
		right = r;
	}

	int& key()
	{
		return std::get<int>(p);;////get<0>(p)  p.first
	}

	std::string& value()
	{
		return std::get<std::string>(p);// p.second
	}
};

class bstree
{

};

}

#endif