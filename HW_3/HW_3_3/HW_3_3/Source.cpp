#include<iostream>

using namespace std;

int main(){
	const int n=5;
	int arr[n];
	int c=0;
	for(int i=0;i<=n;i++)
		cin>>arr[i];
	
	for(int i=0;i<=n;i++){
		if (arr[i]<6) 
			c=c+arr[i];
	}
		cout<< c;
	
	cin.get();
	cin.get();
}