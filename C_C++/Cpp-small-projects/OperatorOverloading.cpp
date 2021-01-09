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

class Complex2{
    private:
        int real;
        int img;
    
    public:
        Complex2(int r=0,int i=0){
            real = r;
            img = i;
        }
        Complex2 add(Complex2 x){
            Complex2 temp;
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
        //friend function
        friend Complex2 operator+(Complex2 n1,Complex2 n2);
};

//as friend function, no scope resolution would be used
Complex2 operator+(Complex2 n1,Complex2 n2){
        Complex2 t;
        t.real = n1.getReal() + n2.getReal();
        t.img = n1.getImg() + n2.getImg();
        return t;
}

int main(){
    Complex c1(1,-2);
    Complex c2(1,5);
    Complex c3 = c1.add(c2);
    cout << c3.getImg()<<endl;
    cout << c3.getReal()<<endl;
    cout << "Using operator overload"<<endl;
    Complex c4 = c1+c2;
    cout << c4.getImg()<<endl;
    cout << c4.getReal()<<endl;

    cout << "Using friend function"<<endl;
    Complex2 n1(2,5);
    Complex2 n2(1,3);
    Complex2 n3 = n1 + n2;
    Complex2 n4 = operator+(n1,n2);
    cout << n4.getImg()<<endl;
    cout << n4.getReal()<<endl;

}