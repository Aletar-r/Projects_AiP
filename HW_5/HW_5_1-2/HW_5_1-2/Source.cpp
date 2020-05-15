
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;
const int string_len = 3;


struct Book{
	string title;
	int age;
	int serial_n;
};

struct Library{
	string city;
	string name;
	Book book;
};

void showLibrary(const Library s){
	cout << s.city<< "\t"
     	<< s.name << "\t\t["
     	<< s.book.title << ","
     	<< s.book.age << ","
		<< s.book.serial_n << "]" << endl;
}

void showLib(const Library sts[], const int len){
	cout << "city \t"
     	<< "name \t["
     	<< "title,"
     	<< "age,"
     	<< "serial_n]" << endl;

	for(int i=0; i<len; i++){
    	showLibrary(sts[i]);
	}

	cout << endl;
}

void randString(string &str, const int len){
	static const char alphabet[] =
        	"ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	// очищаем и заносим данные
	str.clear();
	str.append(len, ' ');

	for(int i=0; i < str.length(); i++){
    	int r = rand() % (sizeof(alphabet)-1);
    	str[i] = alphabet[r];
	}
	str[str.length()] = 0;  // последний символ сообщает о том, что строка закончилась
}

void initLib(Library sts[], const int len){
	for(int i=0; i<len; i++){
    	// Lib
		randString(sts[i].city, string_len);
		randString(sts[i].name, string_len);
    	
    	// book
		randString(sts[i].book.title, string_len);
		sts[i].book.age = rand() % 99;
		sts[i].book.serial_n = rand() % 2000;
	}
}

void writeTextFile(const Library sts[], const int l){
	ofstream f;

	f.open("data.txt");
	for(int i = 0; i < l; i++)  // Все атрибуты struct  в одной строке
		f << sts[i].city<< " "
      	<< sts[i].name << " "
		<< sts[i].book.title << " "
		<< sts[i].book.age << " "
		<< sts[i].book.serial_n << endl;
	f.close();
}

void openTextFile(Library sts[], const int l){
	ifstream f;

	f.open("data.txt");
	for(int i = 0; i < l; i++)
    	f >> sts[i].city
		>> sts[i].name
      	>> sts[i].book.title
		>> sts[i].book.age
		>> sts[i].book.serial_n;
	f.close();
}

void writeBinFile(Library sts[], const int l){
	// in-function WRITE code
	fstream f;
	f.open("data.bin.txt", ios::out | ios::binary);
	f.write((char*)sts, sizeof(Library)*l);
	f.close();
}

void openBinFile(Library sts[], const int l){
	fstream f;
	f.open("data.bin.txt", ios::in | ios::binary);
	f.read((char*)sts, sizeof(Library)*l);
	f.close();
}


int main()
{
	// init
	cout.precision(3);
	srand(5);

	const int len = 20;
	Library libs[len];

	cout << "Начальный массив:\n";
	initLib(libs, len);
	writeTextFile(libs, len);
	showLib(libs, 5);

	cout << "Новый массив:\n";
	initLib(libs, len);
	showLib(libs, 5);

	cout << "Считанный массив:\n";
	openTextFile(libs, len);
	showLib(libs, 5);

	cout << "Бинарный файл.\n";
	writeBinFile(libs, len);

	cout << "Новый массив:\n";
	initLib(libs, len);
	showLib(libs, 5);

	cout << "Считанный массив:\n";
	openBinFile(libs,len);
	showLib(libs, 5);

	//return 0;
	cin.get();
}

/*
Начальный массив:
city    name    [title,age,serial_n]
CPJ     JWW             [HVQ,69,1114]
HNE     KRD             [JIJ,43,992]
TBO     HKZ             [MLF,49,959]
QZD     ERJ             [AKG,64,585]
HTC     NKW             [QNF,74,633]

Новый массив:
city    name    [title,age,serial_n]
FEX     FJG             [UCE,18,1880]
WOY     KCU             [ZOV,45,1924]
IWY     EJY             [QWD,89,1760]
FRG     CUB             [EFS,83,864]
SBL     AMI             [EMH,21,139]

Считанный массив:
city    name    [title,age,serial_n]
CPJ     JWW             [HVQ,69,1114]
HNE     KRD             [JIJ,43,992]
TBO     HKZ             [MLF,49,959]
QZD     ERJ             [AKG,64,585]
HTC     NKW             [QNF,74,633]

Бинарный файл.
Новый массив:
city    name    [title,age,serial_n]
SXC     MWT             [GDQ,40,1325]
RRA     TLV             [JYH,28,119]
FQO     GVZ             [ZZG,66,1805]
TZD     QTJ             [PCK,18,1070]
GGQ     DKS             [VFX,80,628]

Считанный массив:
city    name    [title,age,serial_n]
CPJ     JWW             [HVQ,69,1114]
HNE     KRD             [JIJ,43,992]
TBO     HKZ             [MLF,49,959]
QZD     ERJ             [AKG,64,585]
HTC     NKW             [QNF,74,633]


*/
