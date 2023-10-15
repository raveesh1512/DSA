#include<iostream>
using namespace std;
int main(){
    int B[3][4]={{1,2,3,4},{2,3,4,5},{7,2,3,4}};
    int *A[3];
    A[0]=new int[4];
    A[1]=new int[4];
    A[2]=new int[4];


    int **C;

    C=new int *[3];
    C[0]=new int[4];
    C[1]=new int[4];
    C[2]=new int[4];
    C[3]=new int[4];

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         A[i][j]=B[i][j];
    //         C[i][j]=B[i][j];

    //     }
    // }

    
    for(int i=0;i<3;i++){
        C[i]=B[i];
    }


        printf("%d\n",&B[1]);
        printf("%d\n",&C[1]);
    




    }
    
