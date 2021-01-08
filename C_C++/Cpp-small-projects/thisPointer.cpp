#include <iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int length,int breadth){
            //this is a pointer
            this->breadth = breadth;
            this->length = length;
        }
                void setLength(int l){
            length = l;
        }

        void setBreadth(int b){
            breadth = b;
        }

        int getLength(){
            return length;
        }

        int getBreadth(){
            return breadth;
        }

        int area(){
            return length * breadth;
        }
        int perimeter(){
            return 2*(length + breadth);
        }
};

//structure
//All the variables are public;
struct Demo
{   
    int x;
    int y;
    double z;

    void display(){
        cout <<x<<" "<<y<<endl;
    }
    void display2(){
        cout << z << endl;
    }
};


int main(){
    Rectangle r1(12,5);
    cout << r1.getBreadth()<<endl;
    Demo d;
    d.x = 10;
    d.y = 20;
    d.z = 10.5;
    d.display();
    d.display2();
}