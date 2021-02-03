#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void area(struct Rectangle &r){
    r.length ++;
}

int main(){
    struct Rectangle r1 =  {10,5};
    area(r1);
    cout <<r1.length<<endl;

}