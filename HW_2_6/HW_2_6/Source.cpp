#include<iostream> 

int main(){
	double a,n,y,x,t,z,r;
	std::cin>> a;
	std::cin>> x;
	y=0;
	// ((a % 2)=0){
		r=(a-1)/2;
			for(int i=3;i<=r; i++){
				n=((i*2)+1)*x;
				z=i/n;
				y=y+z;}
			//}else{
			//	r=(a-1)/2;
		//	for(int i=3;i<=(r-1); i++){
		//		n=((i*2)+1)*x;
		//		z=i/n;
		//		y=y+z;}
			//y=y+r/(((r*2)+1)*x);
	std::cout<< y;
	std::cin>> t;

}