#include "booking.h"

Booking::Booking()
{
	no = 0;
	name = NULL;
	place = 0;
}

Booking::Booking(const int newNo, const char* newName, const int newPlace)
{
	setNo(newNo);
	setName(newName);
	setPlace(newPlace);
}

Booking::Booking(const Booking& b)
{
	setNo(b.no);
	setName(b.name);
	setPlace(b.place);
}

Booking::~Booking()
{
	if (name)
		delete[] name;
	no = 0;
	name = NULL;
	place = 0;
}

Booking& Booking::operator=(const Booking& b)
{
	setNo(b.no);
	setName(b.name);
	setPlace(b.place);
	return *this;
}

bool Booking::operator==(const Booking& b) const
{
	return (no == b.no && strcmp(name, b.name) == 0 && place == b.place);
}

ostream& operator<<(ostream& os, Booking& b)
{
	os << b.no << " " << b.name << " " << b.place << endl;
	return os;
}

istream& operator>>(istream& is, Booking& b)
{
	int no;
	char* name = new char[20];
	int place;
	cout << "Numar zbor: ";
	is >> no;
	cout << "Nume: ";
	is >> name;
	cout << "Numar loc: ";
	is >> place;
	b.setNo(no);
	b.setName(name);
	b.setPlace(place);
	return is;
}

int Booking::getNo()
{
	return no;
}

void Booking::setNo(const int newNo)
{
	no = newNo;
}

char* Booking::getName()
{
	return name;
}

void Booking::setName(const char* newName)
{
	name = new char[strlen(newName) + 1];
	strcpy_s(name, strlen(newName) + 1, newName);
}

int Booking::getPlace()
{
	return place;
}

void Booking::setPlace(const int newPlace)
{
	place = newPlace;
}