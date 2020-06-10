/*
 * Пример работы с бинарными файлами.
 * Считываем заголовки популярных форматов.
 * Использование seekg, tellg
*/
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


void readPdfHeader(const string fname){
    ifstream f;
    char c[8];

    f.open(fname.c_str());
    if (!f.is_open()) {
        cout << "Error open: " << fname << ". (" << strerror(errno) << ")." << endl;
        f.close();
        return;
    }
    f >> c;
    f.close();

    cout << "----------------- PDF file header reader ----------------- \n";
    cout << "Size of char type is " << sizeof(char) << " byte." << endl;
    cout << "PDF header is 8 bytes." << endl;
    cout << "PDF header of \"" << fname << "\" file is: " << c << endl;

    cout << endl;
}

typedef short int WORD;
typedef unsigned int DWORD;
typedef int LONG;

#pragma pack(push, 1)  // упаковка памяти, иначе структура будет занимать 16 байт, а не 14, как положено
struct BITMAPFILEHEADER {
    WORD    bfType;
    DWORD   bfSize;
    WORD    bfReserved1;
    WORD    bfReserved2;
    DWORD   bfOffBits;
};
#pragma pack(pop)

struct BITMAPINFOHEADER {
    DWORD  biSize;
    LONG   biWidth;
    LONG   biHeight;
    WORD   biPlanes;
    WORD   biBitCount;
    DWORD  biCompression;
    DWORD  biSizeImage;
    LONG   biXPelsPerMeter;
    LONG   biYPelsPerMeter;
    DWORD  biClrUsed;
    DWORD  biClrImportant;
};

void readBmpHeader(string fname){
    ifstream f;
    BITMAPFILEHEADER fHead;
    BITMAPINFOHEADER imHead;

    f.open(fname);
    if (!f.is_open()) {
        cout << "Error open: " << fname << ". (" << strerror(errno) << ")." << endl;
        f.close();
        return;
    }
    f.read((char*)&fHead, sizeof(fHead));
    f.read((char*)&imHead, sizeof(imHead));
    f.close();

    cout << "----------------- BMP file header reader ----------------- \n";
    cout << fname << endl;
    cout << "Size of types are (in bytes, / must be):" << endl;
    cout << "WORD  " << sizeof(WORD) << " /2" << endl;
    cout << "DWORD " << sizeof(DWORD) << " /4" << endl;
    cout << "LONG  " << sizeof(LONG) << " /4" << endl;
    cout << "BITMAPFILEHEADER " << sizeof(BITMAPFILEHEADER) << " /14"  << endl;
    cout << "BITMAPINFOHEADER " << sizeof(BITMAPINFOHEADER) << endl;

    cout << endl;

    cout << "File info: ["
         << fHead.bfType << " == 19778, "
         << fHead.bfSize << " bytes, "
         << fHead.bfReserved1 << ", "
         << fHead.bfReserved2 << ", "
         << fHead.bfOffBits << "] " << endl;

    cout << "Image info: ["
         << imHead.biSize << " bytes, ("
         << imHead.biWidth << "x"
         << imHead.biHeight << ") px, "
         << imHead.biBitCount<< " bits] "<< endl;

    cout << endl;
}


void readBmpImageHeader(string fname){
    ifstream f;
    BITMAPINFOHEADER imHead;

    f.open(fname);
    if (!f.is_open()) {
        cout << "Error open: " << fname << ". (" << strerror(errno) << ")." << endl;
        f.close();
        return;
    }

    cout << "----------------- BMP file Image header reader via seek----------------- \n";
    cout << fname << endl;
    cout << "BITMAPFILEHEADER size is 14 bytes"  << endl;
    cout << "BITMAPINFOHEADER " << sizeof(BITMAPINFOHEADER) << endl;

    cout << "Current position in file " << f.tellg() << endl;
    cout << "Seek 14 bytes" << endl;
    f.seekg(14);  // смещаемся на 14 байт вперёд
    cout << "Current position in file " << f.tellg() << endl;

    f.read((char*)&imHead, sizeof(imHead));
    f.close();

    cout << endl;

    cout << "Image info: ["
         << imHead.biSize << " bytes, ("
         << imHead.biWidth << "x"
         << imHead.biHeight << ") px, "
         << imHead.biBitCount<< " bits] "<< endl;

    cout << endl;
}

int main()
{
    /* Unix-style пути к файлу: слеши / и \ */
    readPdfHeader("D:/Program Files (x86)/Visual Studio 2012/Projects/HW_5/HW_5_3/HW_5_3/file.pdf");
	readBmpHeader("D:/Program Files (x86)/Visual Studio 2012/Projects/HW_5/HW_5_3/HW_5_3/microsoft.bmp");
    readBmpImageHeader("D:/Program Files (x86)/Visual Studio 2012/Projects/HW_5/HW_5_3/HW_5_3/microsoft.bmp");
	   // return 0;
		cin.get();
}