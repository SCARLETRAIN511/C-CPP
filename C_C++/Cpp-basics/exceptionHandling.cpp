#include <iostream>
using namespace std;

class MyException:public exception{

};

//error: Syntax, logic error, runtime error
int division(int a,int b)throw(int){
    if (b == 0){
        throw 1;
    }
    return a/b;
}
//throw and catch are a kind of connection
int main(){
    int a = 10,b = 0,c;
    try{
        c = division(a,b);
        cout << c;
    }catch(int m){
        cout << "Divison by zero "<<m;
    }
    cout << "Bye";

}