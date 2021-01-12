#include <iostream>
using namespace std;

class Base{
    public:
    int x;

    void show(){
        cout << x<<endl;
    }
};

class Derived:public Base{
    public:
    int y;
    void display(){
        cout << x<<" "<<y<<endl;
    }
};

class Rectangle{
    private:
        int length;
        int breadth;

    public:
        Rectangle(int l = 0,int b = 0){
            length = l;
            breadth = b;
        }
        int getLength(){
            return length;
        }
        int getBreadth(){
            return breadth;
        }
        void setLength(int l){
            length = l;
        }
        void setBreadth(int b){
            breadth = b;
        }

        int area(){
            return length * breadth;
        }
        int perimeter(){
            return 2*(length +  breadth);
        }
        bool isSquare(){
            return length == breadth;
        }
};

void useInheritence(){
    Derived d;
    d.x = 1;
    Base b;
    b.x = 12;
    b.show();
    d.y = 2;
    d.display();
    d.show();
}

class Cuboid:public Rectangle{
    private:
        int height;
    public:
        Cuboid(int l=0,int b =0,int h = 0){
            height = h;
            setLength(l);
            setBreadth(b);           
        }

        int getHeight(){
            return height;
        }
        void setHeight(int h){
            height = h;
        }
        int volume(){
            return getLength()*getBreadth()*getHeight();
        }
};


int main(){
    useInheritence();

    Rectangle r(10,5);
    cout << "The area of r is "<<r.area()<<endl;
    Cuboid c1(2,3,5);
    cout << "The volume of c1 is "<<c1.volume()<<endl;
}