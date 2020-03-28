#include <iostream>
#include <iomanip> 
#include <math.h> 

int main(){
	std::cout.precision(5);
	std::fixed;
		int a;
		float f1, f2;
		float x, y;
		const float eps = 0.00001;
		float h;
		std::cout << "Enter [f1, f2]: ";
		std::cin>> f1 >> f2;
		std::cout << "Enter dx: ";
		std::cin>> h;
		x=f1;
		std::cout << "\tx\t\ty" << std::endl;
	while(x<f2+h){
		y=(sqrt(2+(4*x*x))+(6*x)+sin((8*x)+11)) ;   //y = 2+4x2 + 6x+sin(8x+11)

			if(fabs(x)< eps) {
				std::cout<<"\t"
						 << 0;
				std::cout<<"\t\t"
						 << y  << std::endl;
			}else {
				std::cout<<"\t"
						 << x;
				std::cout<<"\t\t"
						 << y  << std::endl;
		}
		x=x+h;

	}

		std::cin>> a;


}