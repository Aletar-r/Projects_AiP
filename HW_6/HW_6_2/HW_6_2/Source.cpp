#include <cstdlib>;
#include <iostream>

using namespace std; 

	int main(){
	const int rows = 4;
    const int cols = 3;
	const int r = rows;
    int mat[rows][cols];
	int mas[r];

    srand(0);
    for(int i = 0; i<rows; i++)
        for(int j = 0; j<cols; j++)
            mat[i][j] = rand()%100;

    for(int i = 0; i<rows; i++) {
        for(int j = 0; j<cols; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }

	int max = 0;
    int mr = 0, mc = 0;

	for(int i = 0; i<r; i++){
		for(int j = 0; j<cols; j++)
			    if(mat[i][j] > max){
				    max = mat[i][j];
				}  		 
		mas[i]=max;
		max = 0;
	}
	for(int k = 0; k<r; k++) {
         cout << mas[k] << " ";
        cout << endl;
    }
    
	cin.get();
	}