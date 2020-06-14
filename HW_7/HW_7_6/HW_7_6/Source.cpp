#include<string>
#include<iostream>

using namespace std;

int main(){
	string a = "asd /* asfasgfg */ lkjlgjk";
           
	    for (int i=0; i<a.length();i++){
			int n=i;
				if (a[i]=='/'){
					a.erase(i, 1);
					i++;
					

					while(a[i] != '/')
					a.erase(i, 1);
					a.erase(i-1, 3);
				}
				
	}
	cout<< a << endl;

	cin.get();
    return 0;
}