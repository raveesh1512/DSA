#include<iostream>
using namespace std;

int func(int A[],int n){
   for(int i=0;i<n;i++) //Can't use foreach since A is pointer
   cout<<A[i]<<endl;
}

int main() {
    int A[]={1,2,3,4,5};
    cout<<sizeof(A)/sizeof(int)<<endl;
    func(A,5);
    for (int a:A)
     cout<<a;
    
}