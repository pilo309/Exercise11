#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include "Switch.h"
#include <iostream>

/*

I exercise 10 lavede du drivere til LED’s og Key’s på RB shield. I dag skal du lave
drivere til styring af de øvrige komponenter på RB shield (switch, temperatursensor 
og fotoresistor/lyssensor) 
Exercise 11.1 Switch driver

Skriv en driver (header- og source-fil) til switch’en på RB shield med definition og
implementering af klassen Switch. Klassen ses i UML klassediagrammet og er
beskrevet nedenfor

*/

int main(void)
{

	using namespace std; //sådan man ikke behøver at skrive std foran i/o

	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}

	printf("Connected to Raspberry Pi\n");
	// To do your code

	Switch Switch1;
	int status;
	while (1)
	{
		status = Switch1.SwitchMode();

		if (status != Switch1.SwitchMode())
			cout << Switch1.SwitchMode(); //udskriver 

		Wait(100);
	}

	return 0;
}