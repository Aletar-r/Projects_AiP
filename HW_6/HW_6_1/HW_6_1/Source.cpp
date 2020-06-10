#include <cstdlib>;
#include <iostream>

using namespace std; 

	int main(){
	const int rows = 5;
    const int cols = 5;
    int mat[rows][cols];

    srand(0);
    for(int i = 0; i<rows; i++)
        for(int j = 0; j<cols; j++)
            mat[i][j] = rand()%100;

    for(int i = 0; i<rows; i++) {
        for(int j = 0; j<cols; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }

	int max = mat[0][0];
    int mr = 0, mc = 0;

    for(int i = 0; i<rows; i++)
        for(int j = 0; j<cols; j++)
            if(mat[i][j] > max){
                max = mat[i][j];
                mr = i;
                mc = j;
            }
	for(int i = 0; i<rows; i++)
        mat[i][mc] = 0;

	 for(int i = 0; i<rows; i++) {
        for(int j = 0; j<cols; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
	cin.get();
	}