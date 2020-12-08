#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int A[] = {1,2,3,4,5,6};

    for (int x:A){
        sum += x;
        cout<<x<<endl;
    }
    string myName;
    cout << "Can i know ur name" << endl;
    cin >> myName;
    cout << "Your name is " << myName << endl;
    std::cout << "Sum is " << sum << std::endl;
}

