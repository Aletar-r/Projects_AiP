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
                mat[i][j] = rand() % 100 - 50;
        
        for(int i = 0; i<rows; i++) {
            for(int j = 0; j<cols; j++)
                cout << mat[i][j] << "\t";
            cout << endl;
        }
        cout << endl;

		int sled_mat=0;
        for(int i = 0; i<rows; i++)
            for(int j = 0; j<cols; j++)
                sled_mat+=mat[i][i];
			
			cout << sled_mat << " ";

		int max = mat[0][0];
		for(int i = 0; i<rows; i++)
			    for(int j = 0; j<cols; j++)
				    if(mat[i][j] > max){
					    max = mat[i][j];
				    }
			cout << max << " ";
			 cout << endl;
	cin.get();
	}