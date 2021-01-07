#include <iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    
    public:
    //constructor
        Rectangle(int l=0,int b=0){
            setLength(l);
            setBreadth(b);
        }
        Rectangle(Rectangle(&rect)){
            length = rect.length;
            breadth = rect.breadth;
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

class Test{
    int a;
    int *p;

    Test(int x){
        a = x;
        p = new int[a];
    }

    Test(Test &t){
        a = t.a;
        p = new int[a];
    }

};

int main(){

    Rectangle r(10,5);
    Rectangle r2(r);
    cout <<"The breadth of r2 is "<< r2.getBreadth()<<endl;
    cout << "The area of r is "<<r.area()<<endl; 

}