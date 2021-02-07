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

//sum of first n
int firstN(int n){
    if (n<=0){
        return 0;
    }else{
        return firstN(n-1)+n;
    }
}

//factorial using recursion
int factorial(int n){
    if (n<=1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

//power using recursion
int power(int m,int n){
    if (n==0){
        return 1;
    }
    return power(m,n-1)*m;
}

//taylor series
int taylorSeries(int x,int n){
    static int p = 1, f=1;
    int r;
    if (n==0){
        return 1;
    }else{
        r = taylorSeries(x,n-1);
        p = p*x;
        f = f*n;
        return r + p/f;
    }
}

//fibonaccci
int fib(int n){
    if (n<=1){
        return 1;
    }else{
        return fib(n-2)+fib(n-1);
    }
}

void hanoi(int n,int A,int B,int C){
    if (n>0){
        hanoi(n-1,A,C,B);
        printf("From %d to %d",A,C);
        hanoi(n-1,B,A,C);
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

    cout <<"Sum of first n function"<<endl;
    cout << firstN(4)<<endl;

    cout << "The factorial of 5 is "<<factorial(5)<<endl;
    cout <<"5 power 5 is "<<power(5,5)<<endl;
    cout <<"Taylorseries of 5 is"<<taylorSeries(5,3)<<endl;
    cout <<"The fifth of fib is "<<fib(5)<<endl;
    hanoi(5,1,2,3);

}