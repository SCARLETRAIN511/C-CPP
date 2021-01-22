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
        T *stk;
        int size;
        int top;

    public:
    Stack(int sz){
        size = sz;
        top = -1;
        stk = new int[size];
    }
    
    void push(T x);
    T pop();
};

template<class T>
void Stack<T>::push(T x){
    if (top == size - 1){
        cout <<"stack is full";
    }else{
        top ++;
        stk[top] = x;
    }
}

template<class T>
T Stack<T>::pop(){
    T x = 0;
    if (top == -1){
        cout <<"The stack is empty";
    }else{
        x = stk[top];
        top --;
    }
    return x;
}

int main(){
    cout << maximum(10,15)<<endl;
    add(10,22.5);

    Stack<int> s(10);
    s.push(5);
    s.push(3);
    s.push(10);
    cout << s.pop() <<endl;
    cout << s.pop()<<endl;

}