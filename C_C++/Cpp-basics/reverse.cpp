#include <iostream>
using namespace std;

uint32_t reversebits(uint32_t num1){
    uint32_t num2 = 0;
    for (int i = 31;i>=0;i--){
        num2 = num2 | (((num1>>(31-i))&1)<<i);
    }
    return num2;
};


int main(){   
    uint32_t num;
    cin >> num;
    cout << reversebits(num)<<endl;
}