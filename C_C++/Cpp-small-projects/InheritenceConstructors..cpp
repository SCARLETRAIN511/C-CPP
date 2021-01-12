#include <iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout <<"Non param base"<<endl;
        }
        Base(int x){
            cout <<"Param of base "<<x << endl;
        }
};

class Derived:public Base{
    public:
        Derived(){
            cout << "Non param of Derived"<<endl;
        }
        Derived(int y):Base(y){
            cout <<"Param of Derived"<<y<<endl;
        }
        Derived(int x,int y):Base(x){
            cout << "Param of Deriverd"<<y<<endl;
        }
};


int main(){
    Derived d(2);
}