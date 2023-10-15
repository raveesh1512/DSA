#include<iostream>
#include<stdio.h>
#include<stdlib.h>
 using namespace std;

 struct Rectangle
 {
    int l;
    int b;
 };
void func(struct  Rectangle *r1) {
        r1->l=13;
        printf("\nLength %d \nBreadh %d",r1->l,r1->b);

}

struct Rectangle *fun(){
    struct Rectangle *p;
    p=new Rectangle;
    p->l=23;
    p->b=13;
}



 int main() {
    struct Rectangle r={10,5};
    func(&r);
    printf("\nLength %d \nBreadh %d",r.l,r.b);
    struct Rectangle *ptr=fun();
    printf("\nLength %d \nBreadh %d",ptr->l,ptr->b);
    return 0;

 }

 
 