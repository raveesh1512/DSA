#include<iostream>

int main(){
    int *p;
    p= (int*)malloc(5*sizeof(int));

    p[0]=1;p[1]=2;p[2]=3;p[3]=4;p[4]=5;
     printf("%d\n",&p[0]);

    int *q;
    q=(int *)malloc(10*sizeof(int));
    for(int i=0;i<5;i++){
        p[i]=q[i];
    }
    printf("%d\n",&q[0]);
    delete p;
    p=q;
    q=NULL;
 printf("%d",&p[0]);




}