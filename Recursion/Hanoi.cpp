#include<iostream>
using namespace std;

void hanoi(int n,int A,int B,int C){
    if(n>0){
    hanoi(n-1,A,C,B);
    printf("from %d to %d\n",A,C);
    hanoi(n-1,B,A,C);
    }
}

int main(){
    hanoi(13,1,2,3);
}