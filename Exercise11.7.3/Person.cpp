#include "Person.h"

Person::Person()
{
}

void Person::setNavn(string Navn)
{
	Navn_ = Navn;
}

void Person::setAlder(int Alder)
{
	if (Alder <= 100 && Alder >= 0)
		Alder_ = Alder;
}

int Person::getAlder(void) const
{
	return Alder_;
}

string Person::getNavn(void) const
{
	return Navn_;
}

void Person::print(void)
{
	cout << Navn_ << " " << Alder_ << " aar";
}

