#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <malloc.h>
#include <stdexcept>
#include <new>

namespace Array
{

template <typename T>
class array final
{
private:
	T* parray = NULL;
	int Size = 0;

public:
	array(int size)
	{

		parray = (T*)malloc(size*sizeof(T));//没测试容器类
		if(parray == NULL)
			throw std::bad_alloc();
		Size = size;
	}
	~array()
	{
		if(parray != NULL)
		{
			free(parray);
			parray = NULL;
		}
	}

	int size()
	{
		return Size;
	}

	T& operator[](int index)
	{
		if(index >= Size || index <0)
			throw std::out_of_range("index out of range");
		return *(parray + index);
	}
	
};

}


#endif
