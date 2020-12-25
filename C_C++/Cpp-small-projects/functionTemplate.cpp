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

int main(){
    cout << maxim(17.5f,14.4f) <<endl;
    cout << maxNum(17,3,188)<<endl;
    int a = 4;
    int b = 5;
    //swap(&a,&b);
    swapRef(a,b);
    cout << a << endl;
    cout << b <<endl;
}