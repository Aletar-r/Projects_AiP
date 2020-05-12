#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>


using namespace std;



struct Frukt{
	string sort;
	int razm;
	string color;
};

struct Airp{
	string mark;
	int age;
	float model;
};

void randString(string &str){
    static const char alphabet[] =
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz";
    str = "     ";


    for(int i=0; i < str.length(); i++){
        int r = rand() % (sizeof(alphabet)-1);
        str[i] = alphabet[r];
    }
    str[str.length()] = 0;
}

void randString_f(string &str){
    static const char alphabet[] =
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    str = "     ";


    for(int i=0; i < 1; i++){
        int r = rand() % (sizeof(alphabet)-1);
        str[i] = alphabet[r];
    }
    str[str.length()] = 0;
}


void showFrukt(const Frukt s){
    cout << s.sort<< "\t"
         << s.razm<< "\t"
         << s.color<< endl;
}

void showAirp(const Airp t){
    cout << t.mark<< "\t"
         << t.age << "\t"
         << t.model<< endl;
}
	 	 	 	
int findFruktsMark(const Frukt s[], const int l, const float key){
    int count = 0;
    for(int i=0; i<l; i++){
		if(s[i].razm > key){
            showFrukt(s[i]);
            count++;
        }
    }
    return count;
}

int findAirpsMark(const Airp t[], const int l, const float key){
    int count = 0;
    for(int i=0; i<l; i++){
		if(t[i].age > key){
            showAirp(t[i]);
            count++;
        }
    }
    return count;
}


void bubbleSort(Frukt data[], int len) {
    Frukt tmp;
    for(int i = 0; i<len; i++){
        for(int j = len-1; j >= i+1; j--){
            if(data[j].razm < data[j-1].razm){
                tmp = data[j];
                data[j] = data[j-1];
                data[j-1] = tmp;
            }
        }
    }
}

void bubbleSort(Airp data[], int len) {
    Airp tmp;
    for(int i = 0; i<len; i++){
        for(int j = len-1; j >= i+1; j--){
            if(data[j].model < data[j-1].model){
                tmp = data[j];
                data[j] = data[j-1];
                data[j-1] = tmp;
            }
        }
    }
}


void write2File(const Frukt s[], const int l){
    ofstream f;
    f.open("data.txt");


    for(int i = 0; i < l; i++)
        f << s[i].sort<< "\t"
		  << s[i].razm << "\t"
          << s[i].color << endl;
    f.close();
}
/*
void writetoFile(const Airp t[], const int l){
    ofstream f;
    f.open("data.txt");


    for(int i = 6; i < l; i++)
        f << t[i].mark<< "\t"
		  << t[i].age << "\t"
          << t[i].model << endl;
    f.close();
} */

void Airpp(const int len1){
	const int len = 5;
    Airp airps[len];

	cout<<endl<< " Airp "<<endl<<endl;

    for(int i=0; i<len; i++){
        airps[i].age = rand() % 40;
        airps[i].model = 5.0* (float) rand()/RAND_MAX;
		randString_f(airps[i].mark);
        showAirp(airps[i]);
    }


    float age = 20;
    cout << endl << "Find all who more than " << age << endl;
    int findCount = findAirpsMark(airps, len, age);
    cout << "Total " << findCount << " elements" << endl;


    cout << endl << "Sorted " << endl;
    bubbleSort(airps, len);


    for(int i=0; i<len; i++)
        showAirp(airps[i]);

   // writetoFile(airps, len);
}

int main(){
    const int len = 5;
    Frukt frukts[len];

		cout<<endl<< " Frukt "<<endl<<endl;

    for(int i=0; i<len; i++){
        frukts[i].razm = rand() % 20;
       // frukts[i].color = 5.0* (float) rand()/RAND_MAX;
		randString_f(frukts[i].color);
        randString(frukts[i].sort);
        showFrukt(frukts[i]);
    }


    float razm = 10;
    cout << endl << "Find all who more than " << razm << endl;
    int findCount = findFruktsMark(frukts, len, razm);
    cout << "Total " << findCount << " elements" << endl;


    cout << endl << "Sorted " << endl;
    bubbleSort(frukts, len);


    for(int i=0; i<len; i++)
        showFrukt(frukts[i]);

    write2File(frukts, len);


	Airpp(len);

    //return 0;
	cin.get();
}


