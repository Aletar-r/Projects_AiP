#include<string>
#include<iostream>

using namespace std;


int main(){
	const int n=7;
	string a[n] = { "Sunday", "Monday", "Tuesday",
	"Wednesday", "Thirsday", "Friday", "Saturday" };

	string tmp;
    for(int i = 0; i<n; i++){
        for(int j = n-1; j >= i+1; j--){
            if(a[j].length() < a[j-1].length()){
                tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
            }
        }
    }

	for(int i=0; i<n; i++)
		cout<< a[i]<< endl;
           
	cin.get();
    return 0;
}