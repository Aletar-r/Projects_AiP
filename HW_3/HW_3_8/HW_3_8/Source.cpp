#include<iostream>
#include<math.h>

using namespace std;

int main(){
	const int n=20;
	int arr[n];	
	for(int i=0; i<n; i++)
       arr[i] = rand() % 100;
	for(int i=0; i<n; i++)
       cout<< arr[i]<<endl;

		int num =arr[0];
		for(int i=1;i<=n-1;i++){
			if(arr[i] % 2 > 0){
				if (arr[i]<num){
				num=arr[i];
				}
			}
		}

		
	cout<< "num- "<<  num <<endl;

	cin.get();
	cin.get();
}
