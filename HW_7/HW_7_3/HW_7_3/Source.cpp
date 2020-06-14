/*Удалить из строки первые буквы слов. 
(Пример. Входная строка: Crystal Method. Результат: rystal ethod).*/

#include <iostream>
#include <string>

using namespace std;

int main() {
cout << "string? ";
string s;
getline(cin, s, '.');

int pos = 0;
while ( (pos = s.find_first_not_of(" ", pos)) != string::npos ) {
s.erase(pos, 1);
pos = s.find_first_of(" ", pos);
}

cout << "result: " << s;
cin.get();
}