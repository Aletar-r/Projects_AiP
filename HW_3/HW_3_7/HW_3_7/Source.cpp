#include<iostream>
#include<math.h>

using namespace std;

int main(){
	const int n=50;
	int arr[n];
	const float eps=0.0001;

	for(int i=0; i<n; i++)
      arr[i]=-50 + rand()%(50-(-50)+1);

	for(int i=0; i<n; i++)
      cout<< arr[i]<<endl;

	  cout<< "______"<<endl;

	for(int i=0;i<=n;i++){
		if (arr[i]<eps){
			arr[i]=arr[i]+5;
		}else
			arr[i]=arr[i]-1;
	}
	for(int i=0; i<n; i++)
      cout<< arr[i]<<endl;
	cin.get();
	cin.get();
}