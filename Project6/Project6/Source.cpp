#include "iostream"

int main(){
	float zk;
	float zp;
	int a;
	int n;
	float st1;
	float st2;

	std::cout<< "¬ведите цену 1кг конфет и 1кг печень€"<<std::endl;
	std::cin>> zk;
	std::cin>> zp;
	system("cls");
	std::cout<< "¬риант a(1) или b(2) ?"<<std::endl;
	std::cin>> a;
	if (a<=1) {
		st1=(zk*0.3)+(zp*0.4);
		std::cout<< st1 <<std::endl;
	}
	if (a>=2) {
		st2=3*((zk*1.8)+(zp*2));
		std::cout<< st2 <<std::endl;
	}
	


	std::cin>> n;
}