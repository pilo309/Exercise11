#include <iostream>

/*

OPGAVE 1
Skriv et lille program ( main()), som kan udskrive alle ulige tal fra og med 1 til og med 99.

*/

int main()
{

	using namespace std;

	for (size_t i = 1; i < 100; i+=2)
		cout << i << endl;
}
