#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

struct Card{
    int face;
    int shape;
    int color;
};

int main(){
    struct Rectangle r = {1,3};
    struct Card c;
    c.face = 1;
    c.shape = 0;
    c.color = 0;
    struct Card d = {1,2,3};
    cout << d.color<<endl;
}