#include <iostream>
#include <fstream>
using namespace std;

class Student{
    private:
        int roll;
        string branch;
        string name;
    public:
        Student(){}
        Student(int roll,string branch,string name){
            this->roll = roll;
            this->branch = branch;
            this->name = name;
        }

        friend ofstream &operator<<(ofstream &ofs,Student &s);
        friend ifstream &operator>>(ifstream &ifs,Student &s);
        friend ostream &operator<<(ostream &os,Student &s);
};

ofstream &operator<<(ofstream &ofs, Student &s){
    ofs<<s.branch<<endl;
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    return ofs;
}

ifstream &operator>>(ifstream &ifs, Student &s){
    ifs >> s.branch;
    ifs >> s.name;
    ifs >> s.roll;
    return ifs;
}

ostream & operator<<(ostream &os,Student &s)
{
    os<<"Name "<<s.name<<endl;
    os<<"Roll "<<s.roll<<endl;
    os<<"Branch "<<s.branch<<endl;
    return os;
}

int main(){
    Student s1(5,"CS","Kath");
    ofstream output("C:\\Users\\msipc\\Desktop\\code\\C-CPP\\C_C++\\Cpp-small-projects\\class.txt",ios::trunc);
    output <<s1;
    output.close();
    Student s2(4,"CS","Terence");
    ifstream ifs("C:\\Users\\msipc\\Desktop\\code\\C-CPP\\C_C++\\Cpp-small-projects\\class.txt");
    ifs >> s2;
    cout << s2;
}
