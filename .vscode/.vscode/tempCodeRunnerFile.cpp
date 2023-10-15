#include<iostream>

using namespace std;

void fun2(int n){

    if(n>0){
    fun2(n--);
    printf("%d\n",n);
    }
}

int main(){
    fun2(3);
}