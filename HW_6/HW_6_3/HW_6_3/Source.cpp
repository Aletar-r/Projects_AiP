#include <cstdlib>;
#include <iostream>

using namespace std; 

	int main(){
	const int rows = 2;
    const int cols = 5;
	const int r = cols;
    int mat[rows][cols];
	int mat2[rows][cols];

    srand(0);
    for(int i = 0; i<2; i++)
        for(int j = 0; j<cols; j++)
            mat[i][j] = rand()%100;
	 for(int i = 1; i<3; i++)
        for(int j = 0; j<cols; j++)
            mat[i][j] = 1+rand()%3;

	 for(int i = 0; i<rows; i++)
        for(int j = 0; j<cols; j++)
            mat2[i][j] = 0;

    for(int i = 0; i<rows; i++) {
        for(int j = 0; j<cols; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }

	
	for(int i = 1; i<3; i++){
        for(int j = 0; j<cols; j++){
			if(mat[i][j] > 2){
				 mat2[i-1][j] = mat[i-1][j]; 
				 mat2[i][j] = mat[i][j]; 
			}}}
	int max = mat2[0][0];
	for(int i = 0; i<rows; i++)
        for(int j = 0; j<cols; j++)
            if(mat[i][j] > max){
                max = mat[i][j];
            }
	cout << max << " ";
        cout << endl;

	cin.get();
	}