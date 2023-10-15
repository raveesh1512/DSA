#include<iostream>
using namespace std;

void swap(int *arr,int i){
            int x=arr[i-1];
            arr[i-1]=arr[i];
            arr[i]=x;
}
int search(int *arr,int element,int size){
    for(int i=0;i<size;i++){
        if(a[i]==element){
            swap(&arr,i);
            return i-1;
        }
    }
    return -1;
}

int main(){
    int a[]={1,2,3,4,5,6};

    printf("%d",search(&a,4));

    return 0;

}