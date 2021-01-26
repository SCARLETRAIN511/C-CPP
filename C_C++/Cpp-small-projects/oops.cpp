#include <iostream>
#include <memory>
using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;
    
    public:
    Rectangle() = default;
    Rectangle(int x,int y){
        length = x;
        breadth = y;
    }
    Rectangle(Rectangle &rect){
        length = rect.length;
        breadth = rect.breadth;
    }
    int area(){
        return length * breadth;
    }

    int perimeter(){
        return 2 * (length + breadth);
    }
};

void fun1(){
    Rectangle *p = new Rectangle();
    delete p;
    //unique_ptr, the object only has one pointer
    /*
    *share_ptr
    * weak_ptr
    */
}

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

    unique_ptr<Rectangle> p3(new Rectangle(10,5));
    cout << p3->area()<<endl;
    cout << p3->perimeter()<<endl;

    unique_ptr<Rectangle> p4;
    p4 = move(p3);
    cout << p4->area()<<endl;
    cout << p4->perimeter()<<endl;

    shared_ptr<Rectangle> p5(new Rectangle(2,4));
    shared_ptr<Rectangle> p6;
    cout << p5->area()<<endl;
    cout << p5->perimeter()<<endl;

    p6 = p5;
    cout << p6->area()<<endl;
    cout << p6->perimeter()<<endl;
    cout << p6.use_count()<<endl;

}   