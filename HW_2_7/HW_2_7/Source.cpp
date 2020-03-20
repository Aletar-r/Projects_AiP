#include<iostream> 
#include<cmath>
#include <conio.h>
int l,a,n,res;
double x,y,t,o;
void fakt(int& res);
int main(){
	std::cin>> a;
	std::cin>> x;
	y=0;
		for(int i=1;i<=a; i=i+4){
			l=i;
			fakt(l);
			y=y-(pow(x,l))/res;
			l=l+2;
			fakt(l);
			y=y+(pow(x,l))/res;
		}
			
	std::cout<< y;
	std::cin>> o;

}
void fakt(int& n){
  int i;
  res = 1;
  for (i = 1; i <= n; i++) {
	res = res * i;
  }
  

}