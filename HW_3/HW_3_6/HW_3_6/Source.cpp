#include<iostream>
#include<math.h>

using namespace std;

int main(){
	const int n=10;
	int arr[n];
	int sum=0;
	float sa;
	
	for(int i=0; i<n; i++)
       arr[i] = rand() % 100;
	for(int i=0; i<n; i++)
      cout<< arr[i]<<endl;
	  cout<< "___"<<endl;
	for(int i=0; i<n; i++)
       sum=sum+arr[i];
		sa=sum/n;

		int min_n=abs(arr[0]);
		for(int i=1;i<=n-1;i++){
			if (arr[i]<sa){
				cout<< arr[i]<<endl;
			}
		}

	cin.get();
	cin.get();
}
