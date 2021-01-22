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
    int *const ptr3 = &z;//pointer is constant, can not point to another value, can not be modified as well

    cout << x<< endl;
    cout << *ptr3<<endl;
}