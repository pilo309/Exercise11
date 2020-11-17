#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include "LightSensor.h"
#include <iostream>

/*

Exercise 11.3 Fotoresistor driver
Skriv en driver (header- og source-fil) til fotoresistoren på RP shield med definition
og implementering af klassen LightSensor. 

Klassen er beskrevet herunder.

*/

int main(void)
{

	using namespace std;

	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}

	printf("Connected to Raspberry Pi\n");
	// To do your code

	LightSensor Sensor1;

	while (1)
	{

		cout << Sensor1.readIntensity() << endl;
		Wait(100);
	}

	return 0;
}