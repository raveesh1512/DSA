#include<stdio.h>
#include<iostream>
using namespace std;

int main() {
    int a=10;
    int &r=a; //both r and a will point to same address
    cout<<a<<endl;
    r++;
    cout<<a<<endl;
    cout<<r<<endl;

    int b=20;
    r=b;
    cout<<a<<endl<<r<<endl;
   return 0;
}