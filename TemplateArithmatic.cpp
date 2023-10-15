#include<iostream>
using namespace std;
template<class T>
class Arithmatic{
    private:
    T a;
    T b;
public:
    Arithmatic(T a,T b);
    T add();
    T sub();
};
template<class T>
Arithmatic<T>::Arithmatic(T a,T b){
    this->a=a;
    this->b=b;
}
template<class T>
T Arithmatic<T>::add(){
   return a+b;   
}
template<class T>
T Arithmatic<T>::sub(){
    return a-b;
}

int main(){
    Arithmatic<int> ar(10,5),ar2(20,34),ar3('a','B');
    cout<<ar.add()<<endl;
    cout<<ar2.sub()<<endl;
    cout<<ar3.sub()<<endl;
    return 0;
}