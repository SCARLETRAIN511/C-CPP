#include <iostream>
using namespace std;

class Array{
    public:
        int A[10];
        int size = 10;
        int length;
        
        void display(){
            int i;
            printf("\nElements are\n");
            for (i=0;i<length;i++){
                printf("%d ",A[i]);
            }
        }

        //append the value
        void append(int x){
            if (length < size){
                A[length ++ ] = x;
            }
        }

        void insert(int index,int x){
            if (index >= 0 && index <= length){
                for(int i=length;i>=index;i--){
                    A[i+1]=A[i];
                }
                A[index] = x;
                length++;
            }
        }

};

int main(){
    Array a;
    a = {1,2,3,4,5};
    a.length = 5;
    a.display();
    a.append(199);
    a.insert(3,100);
    a.display();

}