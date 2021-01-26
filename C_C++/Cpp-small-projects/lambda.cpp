#include <iostream>
using namespace std;

int main(){
    //lambda function
    cout << ([](int x, int y){return x + y;}(10,30))<<endl;
    int a = [](int x, int y){return x + y;}(20,55);
    cout << a <<endl;

    int num = 10;
    auto f = [&num](){cout << num<<endl;};
    f();
    num ++;
    f();
    
}