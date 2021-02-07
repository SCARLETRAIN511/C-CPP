#include <iostream>
using namespace std;

int main(){
    int *p,*q;
    p = (int *)malloc(5*sizeof(int));
    p[0]=3;p[1]=5;p[2]=10;p[3]=3;p[4]=7;

    q = (int *)malloc(10*sizeof(int));
    for(int i=0;i<5;i++){
        q[i] = p[i];
    }

    for (int i = 0;i<5;i++){
        cout << q[i] <<" ";
        cout << p[i]<<" ";
    }
}