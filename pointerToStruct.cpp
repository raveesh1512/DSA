#include<stdio.h>
#include<iostream>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};

int main() {
//   struct Rectangle r={12,7};
//   struct Rectangle *P=&r;
//   (*P).breadth=13;
//   P->length=14;
 struct Rectangle *P; //this availabe in stack(pointer)
 //P=(struct Rectangle *) malloc(sizeof(struct Rectangle)); //this is created in heap and stored in variable P which is available in stack
 P=new Rectangle;
 P->breadth=23;
 cout<<P->breadth<<endl;

}