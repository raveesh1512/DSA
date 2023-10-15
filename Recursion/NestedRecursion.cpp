#include<iostream>

using namespace std;

int fun(int n){
    if(n>100){
        return n-10;
    }
    else{
        fun(fun(n+11));
    }
       
}

int main(){
    printf("%d\n",fun(86));
}