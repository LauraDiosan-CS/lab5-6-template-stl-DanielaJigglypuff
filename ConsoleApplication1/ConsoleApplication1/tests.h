#pragma once
#include "ui.h"
#include <assert.h>

void tests()
{
	Booking b;
	Booking b1(1, "a", 1);
	Booking b2(b1);
	b.setNo(2);
	b.setName("b");
	b.setPlace(2);
	assert(b1 == b2);
	assert(b.getNo() == 2 && strcmp(b.getName(), "b") == 0 && b.getPlace() == 2);
	Repo<Booking> repo;
	repo.add(b);
	assert(repo.size() == 1);
	repo.mod(b, b1);
	assert(*(repo.all().begin()) == b1);
	repo.del(b1);
	assert(repo.size() == 0);
	assert(repo.isHere(b1) == 0);
	Service<Booking> service;
	service.add(b);
	assert(service.size() == 1);
	service.mod(b, b1);
	assert(*(service.all().begin()) == b1);
	service.del(b1);
	assert(service.size() == 0);

}