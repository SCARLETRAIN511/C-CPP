#include <iostream>
using namespace std;

class Parent{
    public:
    void display(){
        cout << "display the parent"<<endl;
    }
};

class Child:public Parent{
    public:
    void display(int x){
        cout << "display the child"<<x<<endl;
    }
};

int main(){
    Child c1;
    c1.display(5);
    c1.Parent::display();
}
