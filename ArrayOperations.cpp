#include<stdio.h>
#include <stdlib.h>
struct Array
{
 int A[10];
 int size;
 int length;
}; 
 void Display(struct Array arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 }
 void Append(struct Array *arr,int x)
 {
 if(arr->length<arr->size)
 arr->A[arr->length++]=x;
 }
 void Insert(struct Array *arr,int index,int x)
 {
 int i;
 
 if(index>=0 && index <=arr->length)
 {
 for(i=arr->length;i>index;i--)
 arr->A[i]=arr->A[i-1];
 arr->A[index]=x;
 arr->length++;
 }
 }

 void swap(struct Array *arr,int i){
            int x=arr->A[i-1];
            arr->A[i-1]=arr->A[i];
            arr->A[i]=x;
}
int search(struct Array *arr,int element,int size){
    for(int i=0;i<size;i++){
        if(arr->A[i]==element){
            swap(arr,i);
            return i-1;
        }
    }
    return -1;
}

 int Deletion(struct Array *arr,int index){
    if(index>=0&&index<arr->length-1){
            int x=arr->A[index];

    for(int i=index;i<arr->length-1;i++){
        arr->A[i]=arr->A[i+1];
    }
    return x;
    }
    arr->length--;
    return 0;
 }

 int RbinarySearch(struct Array *arr,int l,int h,int element){
if(l<=h){
    int m=(l+h)/2;
    if(element==arr->A[m]){
         return m;
    }
    else if(element<arr->A[m]){
      return  RbinarySearch(arr,l,h-1,element);
    }
    else{
        return  RbinarySearch(arr,l+1,h,element);
    }
}
return -1;
 } 
int binarySearch(int l,int h,int element,struct Array *a){
    while(l<=h){
        int m=(l+h)/2;
        if(element==a->A[m]){
            return m;
        }
        if(element<a->A[m]){
            h=h-1;
        }
        else{
            l=l+1;
        }
    }
    return -1;
}
int Get(int index,struct Array a){
    if(index>=0&&index<a.length)
             return a.A[index];
     return -1;
}

void Set(int index,struct Array *a,int element){
    if(index>=0&&index<a->length)
             a->A[index]=element;
     
}

int max(struct Array a){
    int max=a.A[0];
    for(int i=1;i<a.length;i++){
        if(a.A[i]>max)
          max=a.A[i];
    }
    return max;
}
int min(struct Array a){
    int min=a.A[0];
    for(int i=1;i<a.length;i++){
        if(a.A[i]<min)
          min=a.A[i];
    }
    return min;
}
int sum(struct Array a){
    int sum=0;
    for(int i=0;i<a.length;i++){
        sum+=a.A[i];
    }
    return sum;
}

float avg(struct Array a){
    return (float)sum(a)/a.length;
}
void reverse(struct Array *arr){
    int* B=new int[arr->length];
    for(int i=arr->length-1,j=0;i>=0;i--,j++){
        B[j]=arr->A[i];
    }
    for(int i=0;i<arr->length;i++){
        arr->A[i]=B[i];
    }
}
void SReverse(struct Array *arr){
    for(int i=0,j=arr->length-1;i<arr->length/2;i++,j--){
        int temp=arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;
    }
}

void leftShift(struct Array *arr){
    int temp=arr->A[0];
    for(int i=0;i<arr->length-1;i++){
        arr->A[i]=arr->A[i+1];
    
    }
    arr->A[arr->length-1]=temp;

}

int isSorted(struct Array arr){
    for(int i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1]){
            return false;
        }
    }
     return true;

}

// void posNeg(struct Array &arr){
//    for(int i=0,j=arr->length-1;i<arr->length;i++){
    
//    }
// }

void insertSort(struct Array *arr,int x){
    int i=arr->length-1;
    if(arr->length==arr->size)
       return;
    while(i>=0&&x<arr->A[i]){
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;

}

void swaps(int *x,int *y){
    int a=*x;
    *x=*y;
    *y=a;

}

    struct Array* mergeTwoArrays(struct Array *arr2,struct Array *arr1){
        int i,j,k;
        i=j=k=0;
        struct Array* arr = (struct Array*)malloc(sizeof(struct Array));
        while(i<arr2->length&&j<arr1->length){
            if(arr2->A[i]<arr1->A[j]){
            arr->A[k++]=arr2->A[i++];
            }
            else{
                arr->A[k++]=arr1->A[j++];
            }
        }
        for(;i<arr2->length;i++){
            arr->A[k++]=arr2->A[i];
        }
        for(;j<arr1->length;j++){
            arr->A[k++]=arr1->A[j];
        }
        arr->length=arr1->length+arr2->length;
        arr->size=10;
        return arr;


    }
     struct Array* unionTwoSets(struct Array *arr2,struct Array *arr1){
        int i,j,k;
        i=j=k=0;
        struct Array* arr = (struct Array*)malloc(sizeof(struct Array));
        while(i<arr2->length&&j<arr1->length){
            if(arr2->A[i]<arr1->A[j]){
            arr->A[k++]=arr2->A[i++];
            }
            else if(arr2->A[i]==arr1->A[j]){
                arr->A[k++]=arr2->A[i++];
                j++;
            }
            else{
                arr->A[k++]=arr1->A[j++];
            }
        }
        for(;i<arr2->length;i++){
            arr->A[k++]=arr2->A[i];
        }
        for(;j<arr1->length;j++){
            arr->A[k++]=arr1->A[j];
        }
        arr->length=k;
        arr->size=10;
        return arr;


    }
      struct Array* interSection(struct Array *arr2,struct Array *arr1){
        int i,j,k;
        i=j=k=0;
        struct Array* arr = (struct Array*)malloc(sizeof(struct Array));
        while(i<arr2->length&&j<arr1->length){
            if(arr2->A[i]<arr1->A[j]){
            i++;
            }
            else if(arr2->A[i]==arr1->A[j]){
                arr->A[k++]=arr2->A[i++];
                j++;
            }
            else{
                j++;
            }
        }
        arr->length=k;
        arr->size=10;
        return arr;


    }


void Rearrange(struct Array *arr){
    int i=0;
    int j=arr->length-1;
    while (i<j)
    {
         while (arr->A[i]<0)
         {
            i++;
         }
         while(arr->A[j]>0) j--;
         if(i<j){
            swaps(&arr->A[i],&arr->A[j]);
         }
         
    }
    
}


int main()
{
struct Array arr1={{2,3,4,7,10},10,5};
struct Array arr2={{1,5,7,9,10},10,5};
struct Array *arr;
arr=interSection(&arr1,&arr2);
Display(*arr);
return 0;
}