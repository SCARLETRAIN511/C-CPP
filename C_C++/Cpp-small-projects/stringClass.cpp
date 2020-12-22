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
    //cout << s<< endl;
    string s2 = "word";
    s2.insert(2,"second");
    cout << s2 << endl;

    string s3 = "ABCDEFG";
    s3.replace(3,4,"kk");
    cout << s3 << endl;

    string s4  = "How you";
    s4.insert(3," area",4);
    cout << s4 << endl;

    string str1 = "Hello";
    string str2 = "World";
    str1.swap(str2);
    cout << str1 << endl;
    
}

int main(){
    stringOp1();
    stringOp2();
}