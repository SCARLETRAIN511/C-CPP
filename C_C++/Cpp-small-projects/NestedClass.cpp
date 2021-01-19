#include <iostream>
using namespace std;

class Outer{
    public:
    void fun(){
        i.display();
    }

    class Inner{
        public:
        void display(){
            cout <<"Diplay the inner" << endl;
        }
    };
    Inner i;
};
//outer class can use the code inside the inner class;

int main(){
    Outer::Inner i;
    i.display();
    
    Outer out;
    out.fun();
}