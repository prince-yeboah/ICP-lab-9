//  A program that declares an array A[][] and initialises it according to my chosen.

# include <iostream>
#include <cmath>

using namespace std;


void populateArray(int A[101][101], int N){
    int i,j;
    srand(time(0));
    for(int x = 0;  x < N; x++){
        i = rand()%(100);
        j = rand()%(100);
        if(A[i][j] == 0){
            A[i][j] = 1;
        }else{
            A[i][j] = 1;
        }
        //cout << A[i][j];
        cout << i << " " << j;
    }
}

void searchValidEntries(int XL, int Yl, int XH, int YH, int A[101][101]){
    int N;
    int i, j;
    for(int i = XL; i <= XL; i++){
        for(int j = XL; i <= XL; j++){
            if(A[i][j] == 0){

                A[i][j] = 1;   // thus the entries is zero
            } else{
                A[i][j] = A[i][j] + 1;
            }
            cout << A[i][j] <<" ";
        }
    }
}

int main(){
    int i,j;
    int A[101][101];
    populateArray(A, 2000);
    searchValidEntries(80,1,100,10,A);
    searchValidEntries(10,20,40,79,A);
    searchValidEntries(1,90,100,100,A);
    searchValidEntries(40,30,70,60,A);
    searchValidEntries(50, 50,70,70,A);
}


