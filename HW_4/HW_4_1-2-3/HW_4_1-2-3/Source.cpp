#include <iostream>
#include <stdlib.h>


using namespace std;


void selectionSort(float data[], int len);
void insertionSort(float data[], int len);
void bubbleSort(float data[], int len);


int main(){
    cout << "Sorting examples!" << endl;
    const int n = 100;
    float data[n];
	int u=0;

    srand(2);


    // массив вещественных чисел в диапазоне (-70, 50)
    for(int i=0; i<n; i++){
       // data[i] = 50.0 * (float) rand()/RAND_MAX - 70.0;
		data[i]=-70 + rand()%(50-(-70)+1);
        cout << data[i] << " ";
    }

    cout << endl << " ---------------------  " << endl;

     //selectionSort(data, n);
    //insertionSort(data, n);
    bubbleSort(data, n);



    for(int i=0; i<n; i++){
        cout << data[i] << " ";
    }

    //return 0;
	cin.get();
	
}


// реализация функций находится здесь 
void selectionSort(float data[], int len) {
    int j = 0;
	int u = 0;
    float tmp = 0;

    for(int i=0; i<len; i++){
        // ищем номер наименьшего элемента среди элементов от i-го до конца
        j = i;


        for(int k = i; k < len; k++){
            if(data[j] > data[k]){
                j = k;
            }
        }
        // меняем местами наибольший элемент и текущий
        tmp = data[i];
        data[i] = data[j];
        data[j] = tmp;
		u++;
    }
	cout<< endl << "	kp=" << u <<endl<< endl;

}

void insertionSort(float data[], int len) {
    float key = 0;
    int j = 0;
	int u =0;
    // проход по массиву
    for(int i = 1; i<len; i++){
        key = data[i];  // ключевой/текущий элемент
        j = i - 1;
        // перестановка элемента на нужное место
        while(j >= 0 && data[j] > key){
            data[j+1] = data[j];
            j = j-1;
            data[j+1] = key;
			u++;
        }
    } cout<< endl << "	kp=" << u <<endl<< endl;
}

void bubbleSort(float data[], int len) {
    float tmp = 0;
	int u =0;

    // идём по массиву
    for(int i = 0; i<len; i++){
        // делаем проверки в оставшейся части массива
        for(int j = len-1; j >= i+1; j--){
            if(data[j] < data[j-1]){  // сравниваем соседние элементы
                // делаем перестановку
                tmp = data[j];
                data[j] =data[j-1];
                data[j-1] = tmp;
				u++;
            }
        }
    }cout<< endl << "	kp=" << u <<endl<< endl;
}
/*  selectionSort 20 / kp = 20
	selectionSort 100 / kp = 100
	selectionSort 500 / kp = 500
	selectionSort 1000 / kp = 1000
	selectionSort 10000 / kp = 10000

	insertionSort 20 / kp = 103
	insertionSort 100 / kp = 2364
	insertionSort 500 / kp = 63322
	insertionSort 1000 / kp = 247911
	insertionSort 10000 / kp = 24856359

	bubbleSort 20 / kp = 103
	bubbleSort 100 / kp = 2364
	bubbleSort 500 / kp = 63322
	bubbleSort 1000 / kp = 247911
	bubbleSort 10000 / kp = 24856359

		*/ 