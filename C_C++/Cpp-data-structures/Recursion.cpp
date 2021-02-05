#include <iostream>
using namespace std;

void fun1(int n){
    if (n>0){
        printf("%d",n);
        fun1(n-1);
    }
}

void fun2(int n){
    if (n>0){
        fun2(n-1);
        printf("%d",n);
        
    }
}

//static variables
int fun3(int n){
    static int x = 0;
    x ++;
    if (n>0){
        return fun3(n-1) + x;
    }
    return 0;
}

int x= 0;
int fun4(int n){
    x ++;
    if (n>0){
        return fun4(n-1) + x;
    }
    return 0;
}

int main(){
    int x = 3;
    fun1(x);
    fun2(x);

    cout <<endl;
    cout << fun4(4)<<endl;

}