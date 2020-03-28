#include<iostream>

using namespace std;

int main(){
	const int n=5;
	int arr[n];

	for(int i=0;i<=n;i++)
		arr[i]=-10 + rand()%(20-(-10)+1);
		

	for(int i=0;i<=n;i++)
		cout<<arr[i]<<endl;
	
	cin.get();
	cin.get();
}