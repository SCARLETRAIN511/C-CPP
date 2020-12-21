#include <iostream>
#include <string>
using namespace std;


void stringOp1(){
    string  str;
    getline(cin,str);
    cout << str <<endl;  
    cout << str.length()<<endl;
}

void stringOp2(){
    string s = "Hello";
    s.append("World");
    cout << s<< endl;
}

int main(){
    stringOp1();
    stringOp2();
}