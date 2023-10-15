#include<iostream>
#include<stdio.h>
#include<stdlib.h>
 using namespace std;

 struct Rectangle
 {
    int l;
    int b;
 };
void func(struct  Rectangle &r1) {
        r1.l=13;
        printf("\nLength %d \nBreadh %d",r1.l,r1.b);

}



 int main() {
    struct Rectangle r={10,5};
    func(r);
    printf("Length %d \nBreadh %d",r.l,r.b);
    return 0;

 }

 
 