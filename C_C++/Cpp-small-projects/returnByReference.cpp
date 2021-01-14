#include <iostream>
using namespace std;

//global variables
int g = 5;

int &fun1(int &a){
    cout << a<<endl;
    return a;
}

void change(){
    g ++;
}

void swapUsingPtr(int *p1,int *p2){
    int p;
    p = *p1;
    *p1 = *p2;
    *p2 = p;
}

void swapUsingRef(int &p1,int &p2){
    int p;
    p = p1;
    p1 = p2;
    p2 = p;
}

void swapUsingValue(int a, int b){
    int p;
    p = a;
    a = b;
    b = p;
}

int main(){
    int x = 10;
    fun1(x) = 25;
    cout << x << endl;
    cout << "g = " << g <<endl;
    change();
    cout << "g = " << g <<endl;

    cout<<"-----------------Comparison between pointer, reference and value------------------"<<endl;
    int a1 = 4;
    int b1 = 9;
    int *ptr1 = &a1;
    int *ptr2 = &b1;
    cout<<"The original values: "<<endl;
    cout<<a1<<endl;
    cout<<b1<<endl;
    
    cout<<"Using pointer to swap"<<endl;
    swapUsingPtr(ptr1,ptr2);
    cout<<a1<<endl;
    cout<<b1<<endl;

    //using pointer is the same as using reference, manipulate the real values;
    cout<<"Using reference to swap"<<endl;
    //在使用引用时，他作为一个申明，是原变量的别称，并不是地址
    int &x1 = a1;
    int &y1 = b1;
    swapUsingRef(x1,y1);
    //可以直接讲实参作为变量传递进函数。
    //swapUsingRef(a1,b1);
    cout<<a1<<endl;
    cout<<b1<<endl;

    cout<<"Using value to swap"<<endl;
    swapUsingValue(a1,b1);
    cout<<a1<<endl;
    cout<<b1<<endl;
    //can not swap using this method;
}