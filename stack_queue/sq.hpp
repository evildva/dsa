#include <iostream>
#include <vector>

namespace Sq
{

template <typename T>
class sq
{
public:
	virtual T pop()=0;
	virtual void push(T& t)=0;
};

template <typename T>
class stack : virtual public sq<T>
{
private:
	std::vector<T> v;

public:
	stack();
	~stack();

	T pop()
	{
		if(!v.empty())
			return v.back();
	}

	void push(T& t)
	{
		v.push_back(t);
	}
	
};

template <typename T>
class queue : virtual public sq<T>
{
private:
	std::vector<T> v;

public:
	 queue();
	~ queue();

	T pop()
	{
		return v.front();
	}

	void push(T& t)
	{
		v.push_back(t);
	}
	
};


}