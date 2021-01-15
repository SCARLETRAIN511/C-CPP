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

class Car{
    public:
    virtual void start() = 0;
    virtual void stop() = 0;
};

class Innova:public Car{
    public:
    void start(){
        cout <<"The innova starts"<<endl;
    }
    void stop(){
        cout <<"The innova stops" <<endl;
    }
};

class Swist:public Car{
    public:
    void start(){
        cout <<"The Swist starts"<<endl;
    }
    void stop(){
        cout <<"The Swist stops" <<endl;
    }
};



int main(){
    Base *p = new Derived;
    p->fun1();
    p->fun2();

    // can not do Car c1;
    Car *c1 = new Innova();
    c1->start();
    Car *c2 = new Swist;
    c2->stop();

}