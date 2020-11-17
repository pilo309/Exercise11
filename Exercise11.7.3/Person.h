#pragma once
#include <string>
#include <iostream>


class Person
{
public:
	Person();
	void setNavn(string Navn = "NN");
	void setAlder(int Alder = 0);

	int getAlder(void) const;
	string getNavn(void) const;

	void print(void);

private:

	string Navn_;
	int Alder_;

};

