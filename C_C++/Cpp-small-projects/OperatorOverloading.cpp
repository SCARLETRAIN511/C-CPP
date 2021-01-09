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
        Complex operator+(Complex x){
            Complex temp;
            temp.real = real+x.real;
            temp.img = img+x.img;
            return temp;
        }
};

int main(){
    Complex c1(1,-2);
    Complex c2(1,5);
    Complex c3 = c1.add(c2);
    cout << c3.getImg()<<endl;
    cout << c3.getReal()<<endl;
    Complex c4 = c1+c2;
    cout << c4.getImg()<<endl;
    cout << c4.getReal()<<endl;

}