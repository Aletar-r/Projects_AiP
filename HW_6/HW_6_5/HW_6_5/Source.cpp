#include <cstdlib>;
#include <iostream>

using namespace std; 

void multOn(float num){
		const int rows = 5;
		const int cols = 5;
        float mat[rows][cols];
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

        for(int i = 0; i<rows; i++)
            for(int j = 0; j<cols; j++)
                mat[i][j] *= num;

        for(int i = 0; i<rows; i++) {
            for(int j = 0; j<cols; j++)
                cout << mat[i][j] << "\t";
            cout << endl;
        }
        cout << endl;
}

void mat_p(){
		const int rows = 5;
		const int cols = 5;
        float matA[rows][cols];
		float matB[rows][cols];
		float matC[rows][cols];
        srand(0);
        
        for(int i = 0; i<rows; i++)
            for(int j = 0; j<cols; j++)
                matA[i][j] = rand() % 100 - 50;

		for(int i = 0; i<rows; i++)
            for(int j = 0; j<cols; j++)
                matB[i][j] = rand() % 100 - 50;
        
        for(int i = 0; i<rows; i++) {
            for(int j = 0; j<cols; j++)
                cout << matA[i][j] << "\t";
            cout << endl;
        }
        cout << endl;
		 for(int i = 0; i<rows; i++) {
            for(int j = 0; j<cols; j++)
                cout << matB[i][j] << "\t";
            cout << endl;
        }
        cout << endl;

        for(int i = 0; i<rows; i++)
            for(int j = 0; j<cols; j++)
                matC[i][j] =  matA[i][j] +  matB[i][j];

        for(int i = 0; i<rows; i++) {
            for(int j = 0; j<cols; j++)
                cout << matC[i][j] << "\t";
            cout << endl;
        }
        cout << endl;
}

void mat_m(){
		const int rows = 5;
		const int cols = 5;
        float matA[rows][cols];
		float matB[rows][cols];
		float matC[rows][cols];
        srand(0);
        
        for(int i = 0; i<rows; i++)
            for(int j = 0; j<cols; j++)
                matA[i][j] = rand() % 100 - 50;

		for(int i = 0; i<rows; i++)
            for(int j = 0; j<cols; j++)
                matB[i][j] = rand() % 100 - 50;
        
        for(int i = 0; i<rows; i++) {
            for(int j = 0; j<cols; j++)
                cout << matA[i][j] << "\t";
            cout << endl;
        }
        cout << endl;
		 for(int i = 0; i<rows; i++) {
            for(int j = 0; j<cols; j++)
                cout << matB[i][j] << "\t";
            cout << endl;
        }
        cout << endl;

        for(int i = 0; i<rows; i++)
            for(int j = 0; j<cols; j++)
                matC[i][j] =  matA[i][j] -  matB[i][j];

        for(int i = 0; i<rows; i++) {
            for(int j = 0; j<cols; j++)
                cout << matC[i][j] << "\t";
            cout << endl;
        }
        cout << endl;
}

using namespace std;
int trn(){
		const int rows = 3;
		const int cols = 3;
        float matA[rows][cols];
		float matB[rows][cols];

		for(int i = 0; i<rows; i++)
            for(int j = 0; j<cols; j++)
                matA[i][j] = rand() % 100 - 50;

		for(int i = 0; i<rows; i++) {
            for(int j = 0; j<cols; j++)
                cout << matA[i][j] << "\t";
            cout << endl;
        }
        cout << endl;
		 
		int s;
		for(int i=0; i < 3; i++)
			for(int j=i+1; j < 3; j++){
			s=matA[i][j];
			matA[i][j]=matA[j][i];
			matA[j][i]=s;}

		for(int i = 0; i<rows; i++) {
            for(int j = 0; j<cols; j++)
                cout << matA[i][j] << "\t";
            cout << endl;
        }
        cout << endl;
    return 1;
}

	int main(){
		
		multOn(3.3);
		mat_p();
		mat_m();
		trn();
	cin.get();
	}