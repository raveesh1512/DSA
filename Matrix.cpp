#include<iostream>


struct Matrix
{
    int A[10];
    int n;
};

void Set(struct Matrix *m,int i,int j,int value)
{
    if(i==j){
        m->A[i-1]=value;
    }
}
int Get(struct Matrix m,int i,int j){
    if(i==j){
        return m.A[i-1];
    }
    else{
        return 0;
    }
}

void Display(struct Matrix m){
    for(int i=1;i<=m.n;i++){
        for(int j=1;j<=m.n;j++){
            if(i==j)
            printf("%d ",m.A[i-1]);
            else
             printf("%d ",0);
        }
        printf("\n");
    }
}
int main(){
    struct Matrix m;
    m.n=4;
    Set(&m,1,1,9);
    Set(&m,2,2,7);
    Set(&m,3,3,6);
    Set(&m,4,4,19);
    printf("%d", Get(m,2,2));
    // Display(m);    
}
