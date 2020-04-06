#pragma once
#include "booking.h"
#include <list>

template <class T>
class Repo
{
private:
	list<T> elements;
public:
	Repo() {}
	~Repo() {}
	void add(const T obj) { elements.push_back(obj); }
	void del(const T obj) { elements.remove(obj); }
	void mod(const T old_obj, const T new_obj) { elements.remove(old_obj); elements.push_back(new_obj); }
	list<T>& all() { return elements; }
	int size() { return elements.size(); }
	bool isHere(T obj)
	{
		for (auto it = elements.begin(); it != elements.end(); ++it)
		{
			if (*it == obj)
				return true;
		}
		return false;
	}
};