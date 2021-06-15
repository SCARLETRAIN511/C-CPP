#include <iostream>
using namespace std;

//using template
template <class T>

T maxim(T a,T b){
    return a>b?a:b;
}

int maxNum(int a,int b,int c = 10){
    return a>b && a>c? a:(b>c?b:c);
}

//passing by address
//pointer parameters
//modify the parameters
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//passing by reference
void swapRef(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int *fun1(int size){
    int *p = new int[size];
    for (int i = 0;i<size;i++){
        p[i] = i+1;
    }
    return p;
}

int main(){
    cout << maxim(17.5f,14.4f) <<endl;
    cout << maxNum(17,3,188)<<endl;
    int a = 4;
    int b = 5;
    //swap(&a,&b);
    swapRef(a,b);
    cout << a << endl;
    cout << b <<endl;

    int *p = new int[5];
    p[1] = 3;
    cout << p[1] << endl;

    int *ptr = fun1(5);
    cout <<*(ptr)<<endl;

}