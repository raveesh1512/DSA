#include<stdio.h>
#include<iostream>
using namespace std;

int main() {
    /*int a=10;
    int *p;
    p=&a; //&a holds the address of a
    cout<<*p<<endl;*/

    // int *p;
    // p=(int *)malloc(5*sizeof(int));//c
    // p=new int[5];
    // cout<<*p<<endl;

    // int A[5]={2,4,5,7,4};
    // int *p;
    // p=A; //or p=&A;
    // for (size_t i = 0; i < 5; i++)
    // {
    //     printf("%d",p[i]);
    //     /* code */
    // }


    // int *p;
    // p=(int *) malloc(5*sizeof(int));
    // p[0]=1; p[1]=3;p[2]=5;
    // p[3]=8; p[4]=4;

    // for (size_t i = 0; i < 5; i++)
    // {
    //     cout<<p[i]<<endl;
    //      }
    //     //free(p);  //in c
    //     delete [ ] p;

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout<<sizeof(p1)<<endl;
        cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;
    


}


struct Rectangle
{
    int length;
    int breadth;

};