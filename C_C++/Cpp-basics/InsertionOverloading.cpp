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
        friend ostream &operator<<(ostream &out,Complex &c);
};

ostream &operator<<(ostream &out,Complex &c){
    out<<c.real<<"+i"<<c.img<<endl;
	return out;
}

int main(){
    Complex c1(3,6);
    int x = 10;
    cout << c1;
    cout << x<<endl;
}