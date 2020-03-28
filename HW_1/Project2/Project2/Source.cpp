#include "iostream"

int main(){
	float a;
	float b;
	float h;
	float p;
	float s;
	int n;
	std::cout<<"Введите параметры прямоугольного треугольника"<<std::endl;
	std::cout<<"a="; std::cin>> a;
	std::cout<<"b="; std::cin>> b;
	std::cout<<"h="; std::cin>> h;
	p=a+b+h;
	s=0.5*b*h;
	std::cout<<"P=";	std::cout<<p<<std::endl;;
	std::cout<<"S=";	std::cout<<s;
	std::cin>> a;
}
