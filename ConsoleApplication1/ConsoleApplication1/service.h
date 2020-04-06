#pragma once
#include "repo.h"

template <class T>
class Service
{
private:
	Repo<T> repo;
public:
	Service() {}
	~Service() {}
	void add(const T obj)
	{
		repo.add(obj);
	}
	void del(const T obj)
	{
		if (repo.isHere(obj) == true)
			repo.del(obj);
	}
	void mod(const T old_obj, const T new_obj)
	{
		if (repo.isHere(old_obj) == true)
		{
			repo.mod(old_obj, new_obj);
		}
	}
	list<T>& all() { return repo.all(); }
	int size() { return repo.size(); }
};