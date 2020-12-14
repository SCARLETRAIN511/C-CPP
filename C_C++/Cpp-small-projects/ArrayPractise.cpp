#include <iostream>
using namespace std;


void sayHi(){
    cout << "Hello wold" << endl;
}

double cube(double num){
    double result = num*num*num;
    return result;
}

void arrayOperation(){
    int A[5];
    A[1] = 10;
    double B[] = {1.5,12.3,31.1,42.3214234,3.55};
    for (int i = 0;i<5;i++){
        cout << B[i] << endl;
    }

    char a1[] = {'A',66,'C',68};
    for (int x:a1){
        cout << x << endl; 
    }
}

//boolean if practise
void isMan(){
    bool isMale = true;
    bool isTall = true;

    if (isMale && isTall){
        cout << "You are a tall male" << endl;
    }else if(isMale && !isTall){
        cout << "You are a short male" << endl;
    }
    else{
        cout << "You are not a male" << endl;
    }
}

int getMax(int num1,int num2){
    int result;
    if (num1 > num2){
        result = num1;
    }else if (num1 < num2){
        result = num2;
    }else{
        cout << "They are the same";
        result = 0;
    }
    return result;
}

int main(){
    int luckyNums[20] = {1,2,331,42,13,83};
    luckyNums[1] = 14;
    luckyNums[19] = 2;


    arrayOperation();

    return 0;
}