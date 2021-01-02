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
    cout << "The index is "<<x << endl;

    //declare the function pointer
    int (*fp)(int,int);
    //assign the address            
    fp = max;
    int value0 = max(10,5);
    int value1 = (*fp)(10,5);
    cout << value0 << endl;
    cout << value1 << endl;

    fp = min;
    //call the function pointer;
    int value2 = (*fp)(10,5);
    //int value3 = fp(10,5); also valid, but not informative
    cout << value2 << endl;
}