#include <iostream>
using namespace std;

int main(){
    int numberGrid[3][2] = {
        {1,2},
        {3,4},
        {5,6}
    };

    for (int i = 0;i<3;i++){
        for (int j = 0;j<2;j++){
            cout << numberGrid[i][j];
        }
        cout << endl;
    }
    int age  = 19;
    int *page = &age;
    cout << &age << endl;
    *page = 20;
    cout << page << endl;

    return 0;
}