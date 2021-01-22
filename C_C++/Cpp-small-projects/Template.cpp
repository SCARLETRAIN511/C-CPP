#include <iostream>
using namespace std;

//template function
template <class T>
T maximum(T x, T y){
    return x > y?x:y;
}

template <class T,class R>
void add(T x,R y){
    cout << x+y<<endl;
}

//template class
template <class T>
class Stack{
    private:
    T s[10];
    int top;
    public:
    void push(T x);
    T pop();
};

template<class T>
void Stack<T>::push(T x){
    
}
template<class T>
T Stack<T>::pop(){
    
}

int main(){
    cout << maximum(10,15)<<endl;
    add(10,22.5);

}