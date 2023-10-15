#include<stdio.h>
#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x; //actually char have 1 bytes because of above have 4 bytes x also have 4 bytes.

};



/*struct Rectangle
{
    int length;
    int breadth;

}r1,r2,r3 along with definition;*/

//struct Rectangle r1,r2,r3; global declaration

int main() {
    struct Rectangle r1={10,5};
    r1.breadth=15;
    r1.length=23;
    //printf("%lu",sizeof(r1));
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
     return 0;
    
}
