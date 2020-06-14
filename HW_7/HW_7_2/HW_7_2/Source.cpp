#include <iostream>
#include <string>

/* Составить алгоритм, исключающий из строки А символы строки Б. */


using namespace std;
int main()
{
    string a = "abcd";
	string b = "bc";
    cout << a << endl; 
	cout << b << endl; 

    for (int i=0; i<b.length();i++){
		for (int k=0; k<b.length();k++){
			if (a[i]==b[k])
				a.erase(i, 1);
				}
	}
	cout << a << endl; 
		cin.get();
		


}