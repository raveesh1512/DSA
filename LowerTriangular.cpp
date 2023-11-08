#include<iostream>
#include<stdlib.h>
struct LowerDiagonalMatrix
{
    int *A;
    int n;
};

void Set(struct LowerDiagonalMatrix *s, int i,int j,int e){
    if(i>=j){
      s->A[((i*(i-1))/2)+j-1]=e;   
    }
}
int Get(struct LowerDiagonalMatrix s,int i,int j){
    if(i>=j){
       return s.A[((i*(i-1))/2)+j-1];
    }
}
void Display(struct LowerDiagonalMatrix s ){
    for(int i=1;i<=s.n;i++){
        for(int j=1;j<=s.n;j++){
            if(i>=j){
                printf("%d ",s.A[((i*(i-1))/2)+j-1]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main(){
    struct LowerDiagonalMatrix m;
    printf("Enter Diemension");
    scanf("%d",&m.n);
    int x;
     m.A=(int *) malloc(m.n*((m.n+1)/2*sizeof(int)));
     printf("all elements");

     for(int i=1;i<=m.n;i++){
        for(int j=1;j<=m.n;j++){
            scanf("%d",&x);
            Set(&m,i,j,x);
        }
     }
     printf("\n\n");
     Display(m);

    return 0;

}