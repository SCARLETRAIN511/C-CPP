#include <iostream>
using namespace std;

class Parent{
    private:
    int age;
    string name;

    public:
    Parent(){
        cout <<"No param for Parent"<<endl;
    }    
    Parent(int x, string y){
        age = x;
        name = y;
    }

    virtual void display(int x){
        cout << "display the parent:"<<x<<endl;
    }
};

class Child:public Parent{
    private:
    int score;
    public:
    Child():Parent(){
        cout <<"No param for Child"<<endl;
    } 
    Child(int num){
        score = num;
        cout << "The score is "<<score <<endl;
    }
    void display(int y){
        cout << "display the child:"<<y<<endl;
    }
};

class Car{
    public:
    virtual void start(){
        cout << "The car starts"<<endl;
    }

    virtual void stop(){
        cout << "The car stops"<<endl;
        //virtual function, can also delete the body;
    }
    virtual void run()=0;
    //This is a purely virtual function;
};

class Innova:public Car{
    public:
    void start(){
        cout <<"The innova starts"<<endl;
    }
    void stop(){
        cout <<"The innova stops"<<endl;
    }
    void run(){
        cout << "The innova runs"<<endl;
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
    void run(){
        cout <<"The Swist runs"<<endl;
    }
};

int main(){
    cout <<"<------------------Using c1 now-------------------->"<<endl;
    Child c1;
    c1.display(3);
    c1.Parent::display(4);

    cout <<"<------------------Using *p now-------------------->"<<endl;
    //virtual function practise
    //The is the base class object
    Parent *p = new Child;
    p->display(5);

    cout <<"<-------------------runtime polymorphism----------------->"<<endl;
    Car *c = new Innova();
    c->start();
    c = new Swist();
    c->start();
    c->run();

}
