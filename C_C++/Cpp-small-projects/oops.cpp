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
    cout << "The perimeter of r1 is "<<r1.perimeter()<<endl;
    cout << "The area of r1 is "<<r2.area() << endl;

    //class pointer;
    Rectangle r;
    Rectangle *p;
    p = &r;
    r.length = 50;
    r.breadth = 20;
    p -> breadth = 30;
    cout <<"The breadth of r is "<< r.breadth << endl;

    //pointer to an object
    //the object is initialized in the heap;
    //Set the pointer
    Rectangle *p1;
    p1 = new Rectangle;
    
    p1 -> length = 15;
    p1 -> breadth = 10;
    cout << "The area of p1 is "<<p1->area() << endl;

    //set the pointer
    Rectangle *p2 = new Rectangle();
    
    p2 ->length = 3;
    p2 -> breadth = 2;
    cout << "The area of p2 is " << p2->area() <<endl;
}   