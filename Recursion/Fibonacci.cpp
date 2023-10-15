#include<iostream>

using namespace std;

int fib(int n){
    int t0=0,t1=1,s;
    if(n==0||n==1){
        return n;
    }
    for(int i=2;i<=n;i++){
        s =t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}

int fibR(int n){
    if(n==0||n==1){
        return n;
    }
    return fibR(n-2)+fibR(n-1);
}


int fibRT(int n){
    int a[n];
    if(n==0||n==1){
        if(a[n]==-1){
            a[n]=n;
        }
        return n;
    }
    if(a[n-2]==-1){
        a[n-2]=fibRT(n-2);
    }
    if(a[n-1]==-1){
        a[n-1]=fibRT(n-1);
    }
    return fibRT(n-2)+fibRT(n-1);
}

int main(){
    int n=9;
    printf("%d\n",fib(n));
    printf("%d\n",fibR(n));
    printf("%d\n",fibRT(n));
}