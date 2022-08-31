#include<iostream>
using namespace std;

int main(){
    int matrixA[2][3] = {{0, 1, 2,}, {3, 4, 5}};
    int i, j, k;
    for(i=0;i<2-1;i++){
        for(j=i;j<2;j++){
            int B = matrixA[j][i] / matrixA[i][i];
            for(k=i;k<2;k++){
                matrixA[j][k] = matrixA[j][k] - matrixA[i][k] * B;
            }
        }
    }
    
    return 0;
}