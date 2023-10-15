#include<iostream>
using namespace std;

int add(int a,int b) {
    a++;
     int sum=a+b;
     return sum;

}

int main() {
    int num1=10,num2=20,sum=0;
    sum=add(num1,num2);
    cout<<num1<<endl;
    cout<<sum<<endl;
    return 0;

}