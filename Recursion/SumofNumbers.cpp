#include<iostream>
using namespace std;

int sum(int n){
    if(n==0)
      return n;
    return sum(n-1)+n;
}
int iSum(int n){
    int total=0;
    while(n>0){
        total+=n;
        n--;
    }
    return total;
}

int main(){
    int n=15;
    printf("%d\n",sum(n));
      printf("%d\n",iSum(n));
      printf("%d\n",(n*(n+1))/2);
      
}