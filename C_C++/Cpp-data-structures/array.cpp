#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

struct Card{
    int face;
    int shape;
    int color;
};

void fun(int A[]){
    cout << A[1]<<endl;
    cout << *(A+1)<<endl;
    A[0] = 10;
}

int main(){
    struct Rectangle r = {1,3};
    struct Card c;
    c.face = 1;
    c.shape = 0;
    c.color = 0;
    struct Card d = {1,2,3};
    cout << d.color<<endl;
    
    //pointer to structure
    struct Rectangle *p1 = &r;
    cout << p1->breadth<<endl;
    cout <<(*p1).breadth<<endl;
    
    //array as the parameters
    cout <<"------------array as parameters----------------"<<endl;
    int A[] = {1,2,3,4,5};
    for (int x:A){
        cout << x<<endl;
    }

    fun(A);
    cout << A[0]<<endl;
}