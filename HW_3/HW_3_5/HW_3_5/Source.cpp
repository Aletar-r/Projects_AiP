#include<iostream>
#include<math.h>

using namespace std;

int main(){
	const int n=20;
	int arr[n];
	int c=0;
	int t=0;
		//for(int i=0;i<=n;i++)
	//	cin>>arr[i];
	for(int i=0; i<n; i++)
       arr[i] = rand() % 100;
	for(int i=0; i<n; i++)
       cout<< arr[i]<<endl;

		int min_n=abs(arr[0]);
		for(int i=1;i<=n-1;i++){
			if (abs(arr[i])<abs(min_n)){
				min_n=arr[i];
				t=i;
			}
		}

		int max_n=abs(arr[0]);
		for(int i=1;i<=n-1;i++){
			if (abs(arr[i])>abs(max_n)){
				max_n=arr[i];
				c=i;
			}
		}
	cout<< "min_n-"<<  min_n <<endl;//Минимальный по модулю элемент
	cout<< "n min-"<< t <<endl;//номер минимального по модулю элемента
	cout<< "max_n-"<< max_n <<endl;//максимальный по модулю элемент
	cout<<"n max-"<< c <<endl;//номер максимального по модулю элемента




	cin.get();
	cin.get();
}
