#include <iostream>
using namespace std;

void sayHi(){
    cout << "Hello wold" << endl;
}

double cube(double num){
    double result = num * num *num;
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
    return 0;
}