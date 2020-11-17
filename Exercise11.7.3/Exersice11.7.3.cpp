#include <iostream>
#include "Person.h"

/*

Ud over de viste metoder skal klassen have både en default- og en explicit-constructor.
a) Skriv koden for hele header-filen Person.h.

*/

int main()
{
	using namespace std;

	Person Test;

	Test.setNavn("Bo Hald");
	Test.setAlder(25);

	Test.print();

}

