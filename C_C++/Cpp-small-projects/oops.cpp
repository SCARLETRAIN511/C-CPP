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

    r2.length = 5;
    r2.breadth = 2;
    
    cout << r1.perimeter()<<endl;
    cout << r2.area() << endl;
}   