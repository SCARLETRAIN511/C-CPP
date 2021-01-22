#include <iostream>
using namespace std;

int main(){
    
    const int x = 10;
    //cant not modify x;
    int y = 0;
    int *ptr = &y;
    ++ *ptr;
    const int *ptr2 = &y;
    //for constant pointer, can not change the value but can let it point to another value
    y++;

    int z = 3;
    ptr2 = &z;

    cout << x<< endl;
    cout << *ptr2<<endl;
}