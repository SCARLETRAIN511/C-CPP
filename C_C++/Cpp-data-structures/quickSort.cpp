#include <iostream>
using namespace std;

int partition(int arr[], int i, int j){
    int leftMark = i;
    int rightMark = j;
    int key = arr[i];

    while(leftMark < rightMark){
        while (leftMark < rightMark && arr[rightMark] >= key){
            rightMark--;
        }
        if (i<j){
            arr[leftMark++] = arr[rightMark];
        }

        while (leftMark < rightMark && arr[leftMark] <= key){
            leftMark ++;
        }
        if (i<j){
            arr[rightMark--] = arr[leftMark];
        }
    }
    arr[i] = arr[leftMark];
    arr[leftMark] = key;
    
    return leftMark;
}

void quickSort(int arr[],int i, int j){
    if (i>=j){
        return;
    }

    int splitPoint = partition(arr,i,j);
    quickSort(arr,i,splitPoint-1);
    quickSort(arr,splitPoint+1,j);
}

int main(){
    int nums[] = {72,6,57,88,60,42,83,73,48,85};
    quickSort(nums,0,9);
    for (int i = 0;i<10;i++){
        cout << nums[i]<<" ";
    }
}