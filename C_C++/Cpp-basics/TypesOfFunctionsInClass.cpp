#include <iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
    //constructors;
        Rectangle();
        Rectangle(int l,int b);
        Rectangle(Rectangle &r);
        //mutators
        void setLength(int l);
        void setBreadth(int b);
        //accessors
        int getLength();
        int getBreadth();
        //facilitators
        int area();
        int perimeter();
        //Enquiry;
        bool isSquare();
        //destructor function
        //~Rectangle();
};

Rectangle::Rectangle(){
    length = 1;
    breadth = 1;
}
Rectangle::Rectangle(int l,int b){
    setLength(l);
    setBreadth(b);
}
Rectangle::Rectangle(Rectangle &r){
    length = r.length;
    breadth = r.breadth;
}
int Rectangle::getLength(){
    return length;
}
int Rectangle::getBreadth(){
    return breadth;
}

void Rectangle::setBreadth(int b){
    breadth = b;
}
void Rectangle::setLength(int l){
    length = l;
}
int Rectangle::area(){
    return length * breadth;
}
int Rectangle::perimeter(){
    return 2*(length + breadth);
}
bool Rectangle::isSquare(){
    if (breadth == length){
        return true;
    }
    else
    {
        return false;
    }
}

int main(){
    Rectangle r1(5,5);
    Rectangle r2(r1);
    cout << r1.getBreadth()<<endl;
    cout << r2.getBreadth()<<endl;
    cout << r1.getLength()<<endl;
    cout << r1.isSquare()<<endl;
}