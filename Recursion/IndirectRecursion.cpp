#include<iostream>

using namespace std;
void fun1(int n);

void fun(int n){
    if (n>0){
    printf("%d\n",n);
    fun1(n-1);
    }

}

void fun1(int n){
    if(n>1){
    printf("%d\n",n);
    fun(n/2);
    }
}

int main(){
    fun(30);
}