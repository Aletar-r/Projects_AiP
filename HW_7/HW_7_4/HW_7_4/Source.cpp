#include <iostream>
#include <string>

/* ��������� ��������, ���������, ������� ��� � ������ ��������� ��� 
   ����������� �� � ������ �����.
 */


using namespace std;
int main()
{
    string a = "fym aymf ahfymdf aym ym";
    cout << a << endl; 
	int n=0;
    for (int i=0; i<(a.length()-1);i++){
			if ((a[i] == 121) && (a[i+1] == 109) && (a[i-1] != 32) && (a[i-1] > 0)){
				n=n+1;
				}
		}
	cout << n; 
	cin.get();
}