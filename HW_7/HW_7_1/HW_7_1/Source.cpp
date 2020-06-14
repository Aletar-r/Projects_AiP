#include <iostream>
#include <string>
using namespace std;
 /* Составить алгоритм, исключающий из текста “лишние” пробелы.
 (В тексте должен быть один пробел для разделения слов) */

int main()
{
    string str;
    int k = 0;

	getline(cin, str);

    while (k != str.size())
    {
        if(str[k] == ' ' && str[k+1] == ' ')
            str.erase(k,1);
        else k++;
    }   
    cout<<str<<endl;
	cin.get();
}
