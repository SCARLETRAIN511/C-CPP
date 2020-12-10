#include <iostream>
using namespace std;


void sayHi(){
    cout << "Hello wold" << endl;
}

double cube(double num){
    double result = num * num *num;
    return result;
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
    cout << luckyNums[25] << endl;

    //call the functions
    sayHi();
    double answer = cube(5.0);
    cout << answer << endl;

    isMan();
    int maxNum;
    maxNum = getMax(1,5);
    cout << maxNum << endl;
    return 0;
}