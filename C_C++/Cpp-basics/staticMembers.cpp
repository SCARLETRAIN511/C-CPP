#include <iostream>
using namespace std;

class Test{
    private:
        int a;
        int b;
    public:
        static int count;
        Test(){
            a = 10;
            b = 10;
            count ++;
        }

        static int &getCount(){ 
            int &ref = count;
            return ref; 
        }
};
//can only be accessible by Test class
int Test::count = 0;

//static Members 2
class Innova{
    public:
    static int price;

    static int getPrice(){
        return price;
    }
};

int Innova::price = 10;

class Student{
    public:
        int roll;
        string name;
        static int addNo;
        Student(string n){
            name = n;
            addNo ++;
            roll = addNo;
        }
        void display(){
            cout <<"Roll is "<<roll<<" Name is "<<name<<endl;
        }
};
int Student::addNo = 0;


int main(){

    Test t1;
    Test t2;
    t1.getCount() = 19;
    cout << t1.count<<endl;
    cout << t1.getCount()<<endl;
    cout << Test::getCount()<<endl;
    cout << Test::count<<endl;
    cout << t2.getCount()<<endl;

    cout<< "The price of innova is "<<Innova::getPrice()<<endl;\

    Student s1("John");
    Student s2("Kath");
    s1.display();
    s2.display();
    cout <<"Totol roll is "<<Student::addNo<<endl;

}