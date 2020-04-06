#include "ui.h"

UI::UI()
{

}

UI::~UI()
{

}

void UI::add()
{
	Booking b;
	cout << "Date pentru adaugat rezervare:" << endl;
	cin >> b;
	service.add(b);
}

void UI::del()
{
	Booking b;
	cout << "Date pentru sters rezervare:" << endl;
	cin >> b;
	service.del(b);
}

void UI::mod()
{
	Booking oldB;
	Booking newB;
	cout << "Date pentru vechea rezervare: " << endl;
	cin >> oldB;
	cout << "Date pentru noua rezervare: " << endl;
	cin >> newB;
	service.mod(oldB, newB);
}

void UI::all()
{
	cout << "Rezervari:" << endl;
	for (auto it = service.all().begin(); it != service.all().end(); ++it)
		cout << *it;
}

void UI::show()
{
	bool gata = false;
	while (!gata)
	{
		cout << endl << "OPTIUNI: " << endl;
		cout << "1.Adauga rezervare" << endl;
		cout << "2.Sterge rezervare" << endl;
		cout << "3.Modifica rezervare" << endl;
		cout << "4.Arata rezervari" << endl;
		cout << "0.EXIT!" << endl;
		cout << "INTRODUCETI: ";
		int opt;
		cin >> opt;
		switch (opt)
		{
		case 1: { add(); break; }
		case 2: { del(); break; }
		case 3: { mod(); break; }
		case 4: { all(); break; }
		case 0: { gata = true; cout << "Multumim ca ati folosit serviciile noas"; }
		}
	}
}