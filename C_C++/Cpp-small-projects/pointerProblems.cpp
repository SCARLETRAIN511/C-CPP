#include <iostream>
using namespace std;

void fun1(int *p1){
    *(p1+1) = 10;
}

int main(){
    //problems related to pointer
    //1.Memory leak
    //2.Uninitialized pointer;
    //3.Dangling pointer;

    int *p = new int[5];
    delete []p;
    p = nullptr;
    cout << "successful"<<endl;

    int *pointerArr = new int[5];
    fun1(pointerArr);
    cout << *(pointerArr+2) << endl;

    //Reference
    //l value is data, r value is the value the data stored
    int x = 10;
    int &y = x;
    x = 11;
    cout << "y = "<<y << endl;

    int a = 5;
    int b = a;
    b = 10;
    cout << "a = "<< a << endl;

    //reference for a same pointer
    int xInt = 10;
    int *yPointer = &xInt;
    int * &zPointer = yPointer;
    cout << "zPointer = "<<*zPointer<<endl; 
    cout << "yPointer = "<<*yPointer << endl;

}