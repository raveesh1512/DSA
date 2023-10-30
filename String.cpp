#include <stdio.h>  // Include for printf
#include <stdlib.h> // Include for malloc and free
using namespace std;

const char* equalStrings(const char* s1,const char* s2){
    int i,j;
    for( i=0,j=0;s1[i]!='\0'&&s2[j]!='\0';i++,j++){
        if(s1[i]!=s2[j]){
            break;
        }
    }
    if(s1[i]==s2[j])
      return "Equal";
    else if(s1[i]<s2[j])
        return "Lesser";
    else
      return "greater";  
}
 const char* reverse(const char* s1){
      int i=0;
       for(;s1[i]!='\0';i++){}
        char* s2=(char *) malloc((i+1)*sizeof(char));
       int j;
       for( j=0,i=i-1;i>=0;j++,i--){
        s2[j]=s1[i];
       }
      s2[j]='\0';
      return s2;

 }
 int findLength(const char* s){
    int i;
    for( i=0;s[i]!=0;i++){}
    return i-1;
 }
bool isPalindrome(const char* s) {
    int length = findLength(s);
    int i = 0;
    int j = length;

    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

   void duplicateElement(const char* s){
        int *arr=(int *) malloc(26*sizeof(int));
        for(int i=0;i<26;i++){
            arr[i]=0;
        }
    for(int i=0;s[i]!=0;i++){
        arr[s[i]-97]++;
    }
    for(int i=0;i<=25;i++){
        if(arr[i]>1){
            printf("%c is duplicated %d times",i+97,arr[i]);
        }
    }
} 
void dupliCate(const char* s1){
    int  H=0,x=0;
    for (int i = 0; s1[i]!='\0'; i++)
    {
      
     x=1<<(s1[i]-'a');
      if(x&H){
        printf("%c is duplicate",s1[i]);
      }
      else{
            H=x|H;
      }
     }
}
void Anagram(const char* s1,const char* s2){
int *arr=(int *) malloc(26*sizeof(int));
for(int i=0;i<26;i++){
    arr[i]=0;
}
for(int i=0;s1[i]!='\0';i++){
    arr[s1[i]-97]++;
}
for(int i=0;s2[i]!='\0';i++){
    arr[s2[i]-97]--;
}
for(int i=0;i<26;i++){
    if(arr[i]!=0){
        printf("Not anagram\n");
    }
}

}
void perMutation(const char* arr, int k, int n) {
    static int a[10] = {0};
    static char res[10];
    int i;
    if (k == n) {
        res[k] = '\0';
        printf("%s\n", res);
    }
    else {
        for (i = 0; arr[i] != '\0'; i++) {
            if (a[i] == 0) {
                res[k] = arr[i];
                a[i] = 1;
                perMutation(arr, k + 1, n);
                a[i] = 0;
            }
        }
    }
}
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void Perm(char* arr, int l, int h) {
    if (l == h) {
        printf("%s\n", arr);
    }
    else {
        for (int i = l; i <= h; i++) {
            swap(&arr[l], &arr[i]);
            Perm(arr, l + 1, h);
            swap(&arr[l], &arr[i]);
        }
    }
}

 
int main() {
    char arr[] = "ABC";
    Perm(arr, 0, 2);
    return 0;
}