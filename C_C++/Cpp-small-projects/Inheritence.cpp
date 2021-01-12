#include <iostream>
using namespace std;

class Base{
    public:
    int x;

    void show(){
        cout << x<<endl;
    }
};

class Derived:public Base{
    public:
    int y;
    void display(){
        cout << x<<" "<<y<<endl;
    }
};

int main(){
    Derived d;
    d.x = 1;
    Base b;
    b.x = 12;
    b.show();
    d.y = 2;
    d.display();
    d.show();
}