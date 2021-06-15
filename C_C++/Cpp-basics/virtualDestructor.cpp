#include <iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout <<"Base constructor"<<endl;
        }
        virtual ~Base(){
            cout <<"Base destructor"<<endl;
        }
};

class Derived:public Base{
    public:
        Derived(){
            cout <<"Derived Constructor"<<endl;
        }
        ~Derived(){
            cout << "Derived destructor"<<endl;
        }
};

void fun(){
    Base *p = new Derived();
    delete p;
    //add virtual for base class, thus both destructors will be used
    //otherwise, only base 
}

int main(){
    fun();

}