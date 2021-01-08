#include <iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int length,int breadth){
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

int main(){
    Rectangle r1(12,5);
    cout << r1.getBreadth()<<endl;
}