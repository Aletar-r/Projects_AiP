#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void readMp3Header(string fname){
    ifstream f;

    f.open(fname);
    if (!f.is_open()) {
        cout << "Error open: " << fname << ". (" << strerror(errno) << ")." << endl;
        f.close();
        return;
    }

    unsigned char b2[2];
    unsigned char b3;
    unsigned char b4;

    cout << "----------------- Read First MP3 Header in file without ID3v2----------------- \n";
    f.read((char*)b2, sizeof(b2));
    f.read((char*)&b3, sizeof(char));
    f.read((char*)&b4, sizeof(char));
    f.close();

    cout << fname << endl << "Signature: " << hex << showbase << endl
         << (int) b2[0] << endl
         << (int) b2[1] << endl
         << (int) b3 << endl
         << (int) b4 << endl;

    cout << endl;
}

int main()
{
    readMp3Header("D:/Program Files (x86)/Visual Studio 2012/Projects/HW_5/HW_5_5/HW_5_5/2.mp3");


  //  return 0;
	cin.get();
}