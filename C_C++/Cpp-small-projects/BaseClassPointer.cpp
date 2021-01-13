#include <iostream>
using namespace std;

class Base{
    public:
    void fun1();
    void fun2();
    void fun3();
};

class Derived:public Base{
    public:
    void fun4();
    void fun5();
};

void Base::fun1(){
    cout << "This is fun1"<<endl;
}

void Base::fun2(){
    cout << "This is fun2"<<endl;
}

void Base::fun3(){
    cout << "This is fun3"<<endl;
}

void Derived::fun4(){
    cout << "This is fun4"<<endl;
}

void Derived::fun5(){
    cout << "This is fun5"<<endl;
}

int main(){
    Base *p;
    p = new Base();
    p->fun3();
    Base *p2;
    p2 = new Derived;
    p2->fun1();//can not call fun4 and fun5

    Derived *p3 = new Derived();
    p3->fun4();
    
}