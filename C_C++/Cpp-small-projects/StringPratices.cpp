#include <iostream>
using namespace std;

int main(){
    char x = 'A';
    char s[10] = "Hello";
    char s2[] = "HelloY";
    cout << s2 << endl;

    //reading and printing string
    char s3[50];
    cout << "Enter your name "<<endl;
    cin.getline(s3,50);
    //cin.getline(s3,50);
    cout << s3 << endl;

}