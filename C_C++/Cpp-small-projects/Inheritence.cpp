#include <iostream>
using namespace std;

class Base{
    public:
    int x;

    Base(){
        cout << "The default of Base"<<endl;
    }
    Base(int x){
        this ->x = x;
        cout <<"The value of base "<<x<<endl;
    }
    void show(){
        cout << x<<endl;
    }
};

class Derived:public Base{
    public:
    int y;
    Derived(){
        cout << "The default of derived"<<endl;
    }
    Derived(int a){
        cout << "The value of derived "<<a<<endl;
    }
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
        Rectangle(Rectangle &r);
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

Rectangle::Rectangle(Rectangle(&r)){
    setLength(r.length);
    setBreadth(r.breadth);
}

void useInheritence(){
    Derived d(5);
    
    d.x = 1;
    d.y = 2;
    cout << "display d all ";
    d.display();
    cout << "show d.x(Same as b.x) ";
    d.show();
    
    
    Base b(3);
    
    cout<<"show b.x ";
    b.show();
    
    
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

class Table{
    public:
    //has a relationship
        Rectangle top;
        int legs;
};

int main(){
    //useInheritence();

    Rectangle r(7,5);
    Rectangle r1(r);
    cout << "The area of r is "<<r.area()<<endl;
    cout << "The area of r1 is "<<r1.area()<<endl;
    Cuboid c1(2,3,5);
    cout << "The volume of c1 is "<<c1.volume()<<endl;
}