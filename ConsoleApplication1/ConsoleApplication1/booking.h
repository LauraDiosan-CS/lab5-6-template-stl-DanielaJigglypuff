#pragma once
#include <iostream>

using namespace std;

class Booking
{
private:
	int no;
	char* name;
	int place;
public:
	Booking();
	Booking(const int, const char*, const int);
	Booking(const Booking&);
	~Booking();
	Booking& operator=(const Booking&);
	bool operator==(const Booking&) const;
	friend ostream& operator<<(ostream&, Booking&);
	friend istream& operator>>(istream&, Booking&);
	int getNo();
	void setNo(const int);
	char* getName();
	void setName(const char*);
	int getPlace();
	void setPlace(const int);
};