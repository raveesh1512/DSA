#include<stdio.h>
#include<iostream>
using namespace std;
struct Array{
    int *A;
    int size;
    int length;
};
void display(struct Array ar){
    for(int i=0;i<ar.length;i++){
        printf("%d ",ar.A[i]);
    }
}

void append(struct Array ar){
    int a;
    scanf("%d",&a);
    ar.A[ar.length]=a;

    ar.length++;
    display(ar);
    printf("%d",ar.length);
}

void insert(struct Array arr){
    int index;
    printf("At which\n");
    scanf("%d",&index);
    for(int i=arr.length;i>index;i--){
        arr.A[i]=arr.A[i-1];
    }

    arr.A[index]=8;
    arr.length++;
    display(arr);



}

int main(){
    struct Array a;
    printf("Enter size");
    scanf("%d",&a.size);
    a.A=(int *)malloc(a.size*sizeof(int *));
    a.length=0;
     int n,i;
    printf("Enter the number of Numbers");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a.A[i]);
    }
    a.length=n;
    display(a);
    append(a);
    insert(a);

}