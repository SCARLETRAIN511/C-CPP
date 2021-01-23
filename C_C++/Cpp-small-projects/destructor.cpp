#include <iostream>
using namespace std;

class Test{
    private:
        int *p;
    public:
        Test(){
            p = new int[10];
            cout << "Test Created"<<endl;
        }
        ~Test(){
            delete []p;
            cout <<"Test destroyed"<<endl;
        }
};

void fun(){
    //only the constructor will be called
    Test *p = new Test();
    delete p;

    Test t;

}

int main(){
    fun();
    Test t;
    Test *p = new Test();
}