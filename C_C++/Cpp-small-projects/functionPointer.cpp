#include <iostream>
using namespace std;

int search(int A[],int n,int key){
    for (int i = 0;i<n;i++){
        if (key == A[i]){
            return i;
        }
    }
    return 0;
}

int max(int x, int y){
    return x > y? x:y;
}

int min(int x, int y){
    return x < y? x:y;
}


int main(){
    int A[] = {2,3,45,5,2,3};
    int x = search(A,6,5);
    cout << x;

    //declare the function pointer
    int (*fp)(int,int);
    //assign the address            
    fp = max;
    (*fp)(10,5);

    fp = min;
    (*fp)(10,5);
}