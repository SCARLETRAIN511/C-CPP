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
                for(int i=length;i>index;i--){
                    A[i]=A[i-1];
                }
                A[index] = x;
                length++;
            }
        }

        //delete elements
        int deleteElement(int index){
            int i;
            if (index>=0 && index < length){
                int x=A[index];
                for (i = index;i<length-1;i++){
                    A[i] = A[i+1];
                }
                length--;
                return x;
            }
            return 0;
        }

        void swap(int &a,int &b){
            int temp;
            temp = b;
            b = a;
            a = temp;
        }

        int linearSearch(int key){
            //return the index or 0
            for (int i = 0;i<length;i++){
                if (key == A[i]){
                    swap(A[i],A[i-1]);
                    return i;
                }
            }
            return -1;
        }
        
        int binarySearch(int key){
            int l,mid,h;
            l = 0;
            h = length - 1;
            while (l<=h){
                mid = (l+h)/2;
                if (key == A[mid]){
                    return mid;
                }else if(key < A[mid]){
                    h = mid - 1;
                }else{
                    l = mid + 1;
                }
            }
            return -1;
        }

        int RBinarySearch(int key,int l,int h){
            int mid;
            if (l<=h){
                mid = (l+h)/2;
                if (key == A[mid]){
                    return mid;
                }else if (key < A[mid]){
                    return RBinarySearch(key,l,mid-1);
                }else{
                    return RBinarySearch(key,mid+1,h);
                }
            }
            return -1;

        }
    };

int main(){
    Array a;
    a = {1,2,3,4,5};
    a.length = 5;
    a.display();

    a.append(199);
    a.display();
    cout <<endl;
    cout << "The element deleted is "<<a.deleteElement(2)<<endl;
    a.display();

    cout <<"The index of 100 is "<<a.linearSearch(100)<<endl;
    cout <<"The index of 5 is "<<a.binarySearch(5)<<endl;
    cout <<"The index of 4 is "<<a.RBinarySearch(4,0,a.length)<<endl;
}