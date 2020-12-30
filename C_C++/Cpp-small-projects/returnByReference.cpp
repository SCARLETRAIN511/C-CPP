#include <iostream>
using namespace std;

int g = 5;

int &fun1(int &a){
    cout << a;
    return a;
}

void change(){
    g ++;
}

int main(){
    int x = 10;
    fun1(x) = 25;
    cout << x << endl;
    cout << "g = " << g <<endl;
    change();
    cout << "g = " << g <<endl;
}