#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l,int b){
    r->breadth=b;
    r->length=l;
}

int calculate(struct Rectangle r){
   return r.length*r.breadth;
}

void changelenght(struct Rectangle *r,int s){
    r->length=s;
}

int main(){
 Rectangle r;
 initialize(&r,23,12);
 int s;
 s=calculate(r);

 cout<<"cla "<<s<<endl;

changelenght(&r,45);


 s=calculate(r);

 cout<<"cla "<<s<<endl;

}