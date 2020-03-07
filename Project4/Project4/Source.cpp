#include "iostream"
#include <math.h>
int main(){
	float x;
	float n;
	float a;
	float b;
	float c;
	float d;
	float e;
	float i;
	
	std::cout<<"¬ведите число"<<std::endl;
	std::cin>> x;

	a=((abs(x-5)-sin(x))/3) +(sqrt(x*x+2014)*cos(2*x)-3);
	std::cout<<a<<std::endl;
	std::cin>> n;
}

