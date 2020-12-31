#include <iostream>
using namespace std;
int v = 0;

void fun(){
    //always in the memory, difference between global and staic, can only be accessed in the scope
    static int a = 5;
    v++;
    cout << a << " "<<v;
}

void fun1(int n){
    if (n > 0){
        cout << n << endl;
        fun1(n-1);
    }
}

int main(){
    fun();
    fun();
    fun();
    fun1(5);
}