    #include<iostream>
    using namespace std;
    int x=0;

   int fun(int n){
        if(n>0){
            x++;
            return fun(n-1)+x;
            
        }
        return 0;
    }
    
    int main(){
        int n=5;
        printf("%d\n",fun(n));
        printf("%d\n",fun(n));
        return 0;
    }