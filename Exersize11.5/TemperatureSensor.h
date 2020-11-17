#pragma once
#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>

class TemperatureSensor
{
public:
	TemperatureSensor();
	double readTemperature();

private:

};


