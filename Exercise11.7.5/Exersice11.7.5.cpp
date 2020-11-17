#include <iostream>

/*

OPGAVE 5
Herunder ser du beskrivelsen for en funktion kaldet findNuller().
int findNuller( char * );

Parametre: En pointer til det array, der skal søges i.
Returværdi: Antallet forekomster af tegnet '0' (nul) i arrayet.

Beskrivelse: Funktionen skal gennemløbe arrayet og tælle antallet forekomster
af tegnet '0' (nul) og derefter returnere det fundne antal.

(Med tegnet '0' menes karakteren (char) med ASCII-værdien 48)

a) Skriv koden for denne funktion.

*/

int findNuller(char * array)
{
	int adresse = 0;
	int counter = 0;

	while (array[adresse] != '\0')
	{
		if (array [adresse] == '0')
			counter++;

		adresse++;
	}

	return counter;
}

int main()
{

	using namespace std;

	char array[5] = {'0', '4', '0', '2', '\0'};         //husk backslash 0

	cout << "vores array hedder" << endl;

		for (size_t i = 0; i < 5; i++)
			cout << array[i] << endl;

	cout << "antallet af nuller: " << findNuller(array);


	return 0;
}