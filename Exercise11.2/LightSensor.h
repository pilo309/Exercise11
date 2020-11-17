#pragma once
#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>

class LightSensor
{
public:
	LightSensor();
	int readIntensity() const;

private:

};


