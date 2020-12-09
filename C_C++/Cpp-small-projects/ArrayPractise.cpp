#include <iostream>
using namespace std;

int main(){
    int luckyNums[20] = {1,2,331,42,13,83};
    luckyNums[1] = 14;
    luckyNums[19] = 2;
    cout << luckyNums[25] << endl;

    return 0;
}