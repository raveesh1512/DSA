#include<iostream>
#include<stdio.h>

using namespace std;

class Rectangle{
public:
    int length;
    
     int breadth;

     void initialize(int l,int b){
        length=l;
        breadth=b;
      }

     int area(){
        return length*breadth;
     }

     int perimeter(){
        return 2*(length+breadth);
     }
     


};

int main(){
   Rectangle r;
   int l,b;
   cin>>l>>b;
   r.initialize(l,b);
   int a=r.area();
   int p=r.perimeter();
   cout<<"Area \n"<<a<<"perimeter \n"<<p;

   return 0;

}