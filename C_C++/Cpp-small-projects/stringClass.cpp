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

void stringOp3(){
    string s = "Welcome";
    char s1[10];
    s.copy(s1,3);
    s1[3] = '\0';
    cout << s1 <<endl;
}


void stringOp4(){
    string str = "How are you";
    cout << str.find("are")<<endl;
}

void subString1(){
    string str = "Programming";
    string str2 = str.substr(2,5);
    cout << str2 << endl;
}

void stringIter(){
    string str = "Hello";
    string::reverse_iterator it;
    for (it = str.rbegin();it != str.rend();it++){
        cout << *it <<endl;
    }

    //or str[i]!='\0'
    for (int i=0;i<str.length();i++){
        cout << str[i]<<endl;
    }
}

int main(){
    //stringOp1();
    //stringOp3();
    //stringOp4();
    //subString1();
    stringIter();
}