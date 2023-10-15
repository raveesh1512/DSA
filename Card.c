#include<stdio.h>

struct Card
{
    int value;
    int shape;
    int colour;
};

int main() {
    struct Card deck[52]={{1,2,2},{3,2,4}};
    printf("%d",deck[1].value);

    return 0;
    
}
