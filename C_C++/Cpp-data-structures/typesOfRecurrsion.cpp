#include <iostream>
using namespace std;

//tail recursion
//recursion is the last statement in the function
void fun1(int n){
    if (n > 0){
        printf("%d\n",n);
        fun1(n-1);
    }
}

//head recursion
void fun2(int n){
    if (n>0){
        fun2(n-1);
        printf("%d\n",n);
    }
}

//tree recursion
void fun3(int n){
    if (n>0){
        printf("%d\n",n);
        fun3(n-1);
        fun3(n-1);
    }
}

//Nested recursion
int fun4(int n){
    if (n>100){
        return n-10;
    }
    else{
        //segmentation fault
        return fun4(fun4(n+1));
    }
}


int main(){
    cout <<"Tail recursion"<<endl;
    fun1(5);
    cout <<"Head recursion"<<endl;
    fun2(5);
    cout << "Tree recursion"<<endl;
    fun3(5);

    cout <<"Nested recursion"<<endl;
    //cout<<fun4(95)<<endl;

}