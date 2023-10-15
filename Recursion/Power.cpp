#include<iostream>
using namespace std;

int pow(int m,int n){
    if(n==0)
     return 1;
    return pow(m,n-1)*m;
}

int sPow(int m,int n){
    if(n==0)
      return 1;
    if(n%2){
        return m*sPow(m*m,(n-1)/2);
    }
    else{
        return sPow(m*m,n/2);
    }
}

int iPow(int m,int n){
    if(n==0){
        return 1;
    }
    if(n%2){
        return m*iPow(m,(n-1)/2)*iPow(m,(n-1)/2);
    }
    else{
        return iPow(m,n/2)*iPow(m,n/2);
    }
}

int main(){
    int n=5;
        printf("%d\n",pow(3,4));

    printf("%d\n",sPow(3,4));
    printf("%d\n",iPow(3,4));

}