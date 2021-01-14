#include <iostream>
using namespace std;

class Parent{
    public:
    virtual void display(int x){
        cout << "display the parent"<<x<<endl;
    }
};

class Child:public Parent{
    public:
    void display(int y){
        cout << "display the child"<<y<<endl;
    }
};

class Car{
    public:
    void start(){
        cout << "The car starts"<<endl;
    }
    void stop(){
        cout << "The car stops"<<endl;
    }
};

class Innova:public Car{
    public:
    void start(){
        cout <<"The innova starts"<<endl;
    }
    void stop(){
        cout <<"The innova stops"<<endl;
    }
};

class Swist:public Car{
    public:
    void start(){
        cout <<"The Swist starts"<<endl;
    }

    void stop(){
        cout <<"The Swist stops"<<endl;
    }
};

int main(){
    Child c1;
    c1.display(3);
    c1.Parent::display(4);

    //virtual function practise
    Parent *p = new Child;
    p->display(5);

    cout <<"<<--------------runtime polymorphism----------------->>"<<endl;

    
}
