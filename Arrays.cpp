#include<iostream>
using namespace std;

int * swap (int n){
  int *P;
  //P=(int *) malloc(n*sizeof(int));
  P=new int[5];
  return P;
}

int main() {
    int n=5;
    int *A;
    A=swap(n);
    for(int i=0;i<5;i++){
        A[i]=i+1;
    }
    cout<<A[0]<<endl;
}