#include <iostream>
using namespace std;

float fun(){
    return 2.34f;
}

int main(){
    auto x = 2*5.8 + 'a';
    auto y = fun();
    cout << y<<endl;

    int x1 = 10;
    float y1 = 90.5;
    decltype(y1) z = 12.3;
    cout << z<<endl;
}