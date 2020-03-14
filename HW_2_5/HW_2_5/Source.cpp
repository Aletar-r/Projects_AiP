#include <iostream>

int main(){
	int a,n,c,o;
	c=0;
	std::cin>>a;
	for(int i=100; i<=999; i++){
		n=(i / 100)+((i % 100)/ 10)+(i % 10);
		if (n==a) {
			c=c+1;}
	}
	std::cout<< c;
	std::cin>>o ;

}