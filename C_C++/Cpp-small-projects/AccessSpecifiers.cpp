#include <iostream>
using namespace std;

class Base{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    void funBase(){
        a = 10;
        b = 20;
        c = 30;
    }
};

class Derived:public Base{
    public:
    void funDerived(){
        b = 2;
        c = 3;
    }

};


int main(){
    Base x;
    
    x.c = 50;
    Derived y;
    y.funBase();
    y.funDerived();
    cout << y.c<<endl;
}