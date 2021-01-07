#include <iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    
    public:
        Rectangle(int l = 0,int b = 0){
            setLength(l);
            setLength(b);
        }

        void setLength(int l){
            length = l;
        }

        void setBreadth(int b){
            breadth = b;
        }

        Rectangle(Rectangle(&rect)){
            length = rect.length;
            breadth = rect. breadth;
        }

        int getLength(){
            return length;
        }

        int getBreadth(){
            return breadth;
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
        a = t*a;
        p = new int[a];
    }
};

int main(){
    Rectangle r(10,5);
    Rectangle r2(r);
    cout << r2.getBreadth()<<endl;
    cout << r.getBreadth()<<endl; 

}