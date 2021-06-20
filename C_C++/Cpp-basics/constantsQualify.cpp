#include <iostream>
using namespace std;

int main(){
    
    int x = 10;
    //cant not modify x;
    int y = 0;
    int *ptr = &y;
    ++ *ptr;

    int num1 =100;
    const int *ptr2 = &num1;
    ptr2 = &x;
    //for constant pointer, can not change the value but can let it point to another value

    int z = 3;
    int *const ptr3 = &z;//pointer is constant, can not point to another value, can be modified as well
    //*ptr3 = 5;

    cout <<*ptr2<< endl;
    cout << x<< endl;
    cout << *ptr3<<endl;
}