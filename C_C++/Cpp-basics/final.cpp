#include <iostream>
using namespace std;

class Parent{
    virtual void show() final{

    }
};
class Child:public Parent{
    void show(){
        //can not overwrite as final keyword
    }
};

int main(){

}