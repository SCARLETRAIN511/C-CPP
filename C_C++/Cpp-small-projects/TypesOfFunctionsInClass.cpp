#include <iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
    //constructor;
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
        ~Rectangle();
};


int main(){

}