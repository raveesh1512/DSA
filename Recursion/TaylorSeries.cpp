#include<iostream>
using namespace std;

double e(int x,int n){
    static double p=1;
    static double f=1;
    double r;
    if(n==0){
        return 1;

    }
    r=e(x,n-1);
    p=p*x;
    f=f*n;
    return r+p/f;


}
double el(int x,int n){
    double r=1;
    for(;n>0;n--){
        r=1+x/(double)n*r;
    }
    return r;
}

double er(int x,int n){
    static double s=1;
    if(n==0){
        return s;
    }
    else{
        s=1+x/(double)n*s;
        return er(x,n-1);
    }
}

int main() {
   // Number of terms in the Taylor series
    printf("%lf\n", el(3, 10));
    printf("%lf\n", e(3, 10));
    printf("%lf\n", er(2, 10));

    return 0;
}
