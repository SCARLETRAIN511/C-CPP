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

int main(){
    int A[] = {2,3,45,5,2,3};
    int x = search(A,6,5);
    cout << x;

}