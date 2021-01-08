#include <iostream>
using namespace std;

class Student{
    private:
        int roll;
        string name;
        int mark[3];
    
    public:
        Student(int roll,string s,int mA,int mB,int mC){
            this->roll = roll;
            this->mark[0] = mA;
            this->mark[1] = mB;
            this->mark[2] = mC;
            this->name = s; 
        }
        int getTotalMark(){
            int total = 0;
            for (int i = 0;i<3;i++){
                total = total + this->mark[i];
            }
            return total;
        }

        void setRoll(int r){
            roll = r;
        }
        void setName(string s){
            name = s;
        }
        void setMark(int a,int b,int c){
            mark[0] = a;
            mark[1] = b;
            mark[2] = c;
        }

        int getRoll(){
            return roll;
        }

        string getName();
};

string Student::getName(){
    return name;
}

int main(){
    Student s1(3,"Kathrine",99,80,70);
    s1.setRoll(5);
    cout << s1.getRoll()<<endl;
    cout << s1.getTotalMark()<<endl;
}