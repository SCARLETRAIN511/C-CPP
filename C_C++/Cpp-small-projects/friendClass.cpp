#include <iostream>
using namespace std;

class Test{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    friend void fun();
};

//friend function cann acess all the variables in the class;
void fun(){
    Test t;
    cout << t.a<<endl;
}
class Your;

class My{
    private:
        int a = 10;

    friend Your;

};

class Your{
    public:
    My m;
    void fun(){
        cout << m.a<<endl;
    }
};


int main(){
    fun();
    Your y;
    y.fun();
}