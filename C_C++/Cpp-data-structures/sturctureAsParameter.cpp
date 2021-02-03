#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

//using reference
void fun1(struct Rectangle &r){
    r.length ++;
}

//using pointer
void changeLength(struct Rectangle *p,int l){
    p->length = l;
}

int main(){
    struct Rectangle r1 =  {10,5};
    fun1(r1);
    cout <<r1.length<<endl;
    changeLength(&r1,14);
    cout << r1.length<<endl;

}