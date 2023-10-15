#include<iostream>
using namespace std;

int C(int n,int r){
    if(r==0||r==n){
        return 1;
    }
    return C(n-1,r-1)+C(n-1,r);

}
int fact(int a);
int ncr(int n,int r){
    int numerator=fact(n);
    int den=fact(r)*fact(n-r);
    return numerator/den;
}

int fact(int a){
    if(a==0)
      return 1;
    return fact(a-1)*a;
}

int main(){
    int n=5;
    int r=3;
    cout<<C(n,r)<<endl;
    cout<<ncr(n,r)<<endl;
}