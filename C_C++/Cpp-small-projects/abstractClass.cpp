#include <iostream>
using namespace std;

//exercise for abstract class
//Class with functions all virtual, polymorphism->only usage, can be called interface
//Can also called abstract class.
class Base{
    public:
    virtual void fun1(){
        cout << "This is fun1 for base"<<endl;
    }

    //purpose of this function is to achieve polymorphism;
    virtual void fun2() = 0;
};

class Derived:public Base{
    public:
    void fun1(){
        cout <<"This is fun1 for child"<<endl;
    }
    void fun2(){
        cout <<"This is fun2 for child"<<endl;
    }
};

int main(){
    Base *p = new Derived;
    p->fun1();
    p->fun2();
}