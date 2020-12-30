#include <iostream>
using namespace std;

int &fun1(int &a){
    cout << a;
    return a;
}

int main(){
    int x = 10;
    fun1(x) = 25;
    cout << x << endl;
}