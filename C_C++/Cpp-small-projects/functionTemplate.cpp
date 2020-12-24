#include <iostream>
using namespace std;

//using template
template <class T>

T maxim(T a,T b){
    return a>b?a:b;
}

int main(){
    cout << maxim(17.5f,14.4f) <<endl;
}