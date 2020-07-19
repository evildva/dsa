#include <iostream>
#include <stdlib.h>
#include <utility>
#include "bstree.hpp"

using namespace std;
using namespace Bstree;

int main()
{
	cout<< __cplusplus       <<endl;
	//cout<< __STDC_VERSION__  <<endl;__FLT_EPSILON__

	bstree_node* t(1,"abc",nullptr,nullptr);
	
	cout<< t->key() <<" "<<t->value();

	return 0;
}