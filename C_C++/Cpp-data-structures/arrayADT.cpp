#include <iostream>
using namespace std;

//implemention of array using adt
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

        void swap(int *a,int *b){
            int temp;
            temp = *b;
            *b = *a;
            *a = temp;
        }

        int linearSearch(int key){
            //return the index or 0
            for (int i = 0;i<length;i++){
                if (key == A[i]){
                    swap(&A[i],&A[i-1]);
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

        void set(int index,int x){
            if (index >=0 && index <length){
                A[index] = x;
            }
        }

        int get(int index){
            if (index >=0 && index < length){
                return A[index];
            }
            return -1;
        }

        int Max(){
            int max = A[0];
            for (int i = 0;i<length;i++){
                if (A[i]>max){
                    max = A[i];
                }
                return max;
            } 
        }

        int Min(){
            int min = A[0];
            for (int i = 0;i<length;i++){
                if (A[i]<min){
                    min = A[i];
                }
                return min;
            } 
        }
        
        int Sum(){
            int sum = 0;
            for (int i = 0;i<length;i++){
                sum += A[i];
            }
            return sum;
        }

        float Avg(){
            return (float)Sum()/length;
        }

        //reverse method
        void reverse(){
            int i,j;
            int *B = new int[length];
            for (i=0;i<length/2;i++){
                swap(&A[i],&A[length-i-1]);
            }
        }
        //left shift and right shift method

        //check sorted or not
        int isSorted(){
            for (int i = 1;i<length;i++){
                if (A[i]>A[i-1]){
                    return 0;
                }
            }
            return 1;
        }

        void insertSort(int x){
            int i = length - 1;
            if (length == size){
                return;
            }
            while (i>=0 && A[i] > x){
                A[i+1] = A[i];
                i--;
            }
            A[i+1] = x;
            length ++;
        }

        void rearrange(){
            int i,j;
            i = 0;
            j = length - 1;
            while (i<j){
                while (A[i]<0) {i++;}
                while (A[i]>=0) {j--;}
                if (i<j){
                    swap(&A[i],&A[j]);
                }
            }
        }

        //Merge 2 sorted arrays;
        int *merge(int B[]){
            int i,j;
            int k = 0;
            i=0;
            j=0;
            int length2 = 5;
            int *C = new int[length + length2];
            while (i<length && j<length2){
                if (A[i]<B[j]){
                    C[k++] = A[i++];
                }else{
                    C[k++] = B[j++];
                }
            }
            for (;i<length;i++){
                C[k++] = A[i++];
            }
            for (;j<length2;j++){
                C[k++] = B[j++];
            }
            return C;
            //same as return &C[0];
        }

        //union operations
        int *Union(int B[]){
            int i,j;
            int k = 0;
            i=0;
            j=0;
            int length2 = 5;
            int *C = new int[length + length2];
            while (i<length && j<length2){
                if (A[i]<B[j]){
                    C[k++] = A[i++];
                }else if(B[j]<A[i]){
                    C[k++] = B[j++];
                }else{
                    C[k++]=A[i++];
                    j++;
                }
            }
            for (;i<length;i++){
                C[k++] = A[i++];
            }
            for (;j<length2;j++){
                C[k++] = B[j++];
            }
            return C;
            //same as return &C[0];
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

    a.reverse();
    a.display();
    a.reverse();
    a.insertSort(6);
    a.display();

    int arr1[5] = {2,3,4,6,10};
    int *arr2 = a.merge(arr1);
    cout << endl;
    cout << "Merging"<<endl;
    for (int i = 0;i<5+a.length;i++){
        cout << arr2[i]<<" ";
    }
}