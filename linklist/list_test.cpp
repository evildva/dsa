#include <iostream>

#include "list.hpp"

using namespace std;
using namespace List;

int main()
{

	list<int> l;

	for(int i=0; i<10; i++)
	{
		node<int> n;
		*(n.pvalue) = i;
		l.push_back(n);
	}

	l.print();

	return 0;
}