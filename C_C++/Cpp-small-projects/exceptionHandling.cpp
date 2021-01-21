#include <iostream>
using namespace std;

//error: Syntax, logic error, runtime error
int division(int a,int b){
    if (b == 0){
        throw 2;
    }
    return a/b;
}
//throw and catch are a kind of connection
int main(){
    int a = 10,b = 0,c;
    try{
        c = division(a,b);
        cout << c;
    }catch(int e){
        cout << "Divison by zero"<<e;
    }
    cout << "Bye";

}