#include<iostream>
using namespace std;
template<class T>
class DiagnalMatrix
{
private: 
   T *A;
   int n;
 public:
    DiagnalMatrix(T n);
    ~DiagnalMatrix();
    void set(int i,int j,int el);
    T  get(int i,int j);
    void display();
};
template<class T>
DiagnalMatrix<T>::DiagnalMatrix(T n){
    this->n=n;
    A=new int[n];
}

template<class T>
DiagnalMatrix<T>::~DiagnalMatrix()
{
    delete []A;
}
template<class T>
void DiagnalMatrix<T>::set(int i, int j, int el)
{
    if(i==j){
        A[i-1]=el;
    }
}
template<class T>
T DiagnalMatrix<T>::get(int i, int j)
{
    if(i==j){
        return A[i-1];
    }
    return 0;
}
template<class T>
void DiagnalMatrix<T>::display()
{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                cout<<A[i-1]<<" ";
            }
            else{
                cout<<0<<" ";;
            }
        }
        cout<<endl;
    }
}

int main(){
    DiagnalMatrix<int> d(4);
    d.set(1,1,9);
    d.set(2,2,6);
    d.set(3,3,7);
    d.set(4,4,8);
    d.display();
}

