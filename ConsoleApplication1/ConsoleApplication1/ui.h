#pragma once
#include "service.h"

class UI
{
private:
	Service<Booking> service;
public:
	UI();
	~UI();
	void add();
	void del();
	void mod();
	void all();
	void show();
};