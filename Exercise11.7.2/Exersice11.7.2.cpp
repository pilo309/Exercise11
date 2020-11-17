#include <iostream>
#include <iomanip>
#define SIZE 10

/*

OPGAVE 2
Skriv et lille program ( main()), hvori du erklærer et array med 10 pladser. Herefter skal alle
pladser i arrayet initialiseres til værdien 5.0 .

*/

int main()
{
	using namespace std;

	double myArray[SIZE];
	
	for (size_t i = 0; i < SIZE; i++)
		myArray[i] = 5.0;

	for (size_t i = 0; i < SIZE; i++)
		cout << fixed << setprecision(1)<< myArray[i] << endl; //sætter den til at være fixed det gør at den ikke ignorerer 0
		
	return 0;
}

