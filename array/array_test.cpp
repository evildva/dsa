#include <iostream>
#include <algorithm>

#include "array.hpp"

using namespace std;
using namespace Array;

int main()
{
	array<int> na(10);

	for(int i = 0;i<na.size();i++)
	{
		na[i] = i;
	}

	for(int i = 0;i<na.size();i++)
	{
		cout<<na[i]<<" ";
	}

	cout<<endl;

	cout<<na[10]<<endl;

	array<int> nb(-1);


	return 0;
}
