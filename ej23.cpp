#include <iostream>
#include <random>
#include <stdlib.h>
#include <cmath>

int main(void)
{
	float pi = 2.0*asin(1.0);
	float r;
	float rand= 0.0;
	float rand2= 0.0;
	float alpha= 0.0;
	srand48(8);
	for(int i=0;i<10000;i++)
	{
		rand = drand48();
		rand2= drand48();
		r= (exp((rand*rand)/-2)/sqrt(2*pi))/(exp((rand*rand)/-2)/sqrt(2*pi));
		alpha= drand48();
		if(alpha>r)
		{
			std::cout << (exp((rand*rand)/-2)/sqrt(2*pi)) << std::endl;
		}
		else
		{
			std::cout << (exp((rand*rand)/-2)/sqrt(2*pi)) << std::endl;
		}
	}
}