#include <iostream>
#include <stdlib.h>


using namespace std;


void selectionSort(float data[], int len, int u);
void insertionSort(float data[], int len);
void bubbleSort(float data[], int len);


int main(){
    cout << "Sorting examples!" << endl;
    const int n = 20;
    float data[n];
	int u = 0;
	int u2 = 0;
	int u3 = 0;

    srand(2);


    // массив вещественных чисел в диапазоне (-70, 50)
    for(int i=0; i<n; i++){
       // data[i] = 50.0 * (float) rand()/RAND_MAX - 70.0;
		data[i]=-70 + rand()%(50-(-70)+1);
        cout << data[i] << " ";
    }


     selectionSort(data, n, u);
	 cout << endl << u; 
    // insertionSort(data, n);
    //bubbleSort(data, n);


    cout << endl << " ---------------------  " << endl;


    for(int i=0; i<n; i++){
        cout << data[i] << " ";
    }

	cout << endl << u; 

    //return 0;
	cin.get();
	
}


// реализация функций находится здесь 
void selectionSort(float data[], int len, int u) {
    int j = 0;
    float tmp = 0;
	cout<< endl << u;

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
	cout<< endl << u;

}

void insertionSort(float data[], int len) {
    float key = 0;
    int j = 0;
    // проход по массиву
    for(int i = 1; i<len; i++){
        key = data[i];  // ключевой/текущий элемент
        j = i - 1;
        // перестановка элемента на нужное место
        while(j >= 0 && data[j] > key){
            data[j+1] = data[j];
            j = j-1;
            data[j+1] = key;
        }
    }
}

void bubbleSort(float data[], int len) {
    float tmp = 0;
    // идём по массиву
    for(int i = 0; i<len; i++){
        // делаем проверки в оставшейся части массива
        for(int j = len-1; j >= i+1; j--){
            if(data[j] < data[j-1]){  // сравниваем соседние элементы
                // делаем перестановку
                tmp = data[j];
                data[j] =data[j-1];
                data[j-1] = tmp;
            }
        }
    }
}
