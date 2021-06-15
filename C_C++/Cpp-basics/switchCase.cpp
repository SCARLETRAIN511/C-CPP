#include <iostream>
using namespace std;

int main(){
    int x = 5;
    switch (x)
    {
    case 1:
        cout << "one";
        break;
    case 2:
        cout << "Two";
        break;
    case 3:
        cout << "Three";
        break;

    default:
        cout << "Invalid Number";
        break;
    }
    return 0;
}