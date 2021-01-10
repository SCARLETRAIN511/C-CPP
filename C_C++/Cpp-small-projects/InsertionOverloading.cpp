#include <iostream>
using namespace std;

class Complex{
    private:
        int real;
        int img;
    public:
        Complex(int r=0,int i=0){
            real = r;
            img = i;
        }
        Complex add(Complex x){
            Complex temp;
            temp.real = real+x.real;
            temp.img = img+x.img;
            return temp;
        }
        int getReal(){
            return real;
        }
        int getImg(){
            return img;
        }
        void display(){
            cout << real <<"+i"<<img<<endl;
        }
};

int main(){
    Complex c1(3,7);
    int x = 10;
    c1.display();
    cout << x<<endl;
}