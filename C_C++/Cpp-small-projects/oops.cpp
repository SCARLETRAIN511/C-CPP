#include <iostream>
using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;
    
    public:
    int area(){
        return length * breadth;
    }

    int perimeter(){
        return 2 * (length + breadth);
    }
};

int main(){
    Rectangle r1,r2;
    r1.length = 10;
    r1.breadth =5;

}