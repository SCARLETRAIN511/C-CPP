#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int sum = 0;
    int A[] = {1,2,3,4,5,6};

    for (int x:A){
        sum += x;
        cout<<x<<endl;
    }
    //string myName;
    //cout << "Can i know ur name" << endl;
    //cin >> myName;
    //cout << "Your name is " << myName << endl;
    std::cout << "Sum is " << sum << std::endl;

    //variable practise
    char grade = 'A';
    string phase = "Giadffe";
    double gpa = 2.3;
    cout << gpa << endl;
    bool isMale = false;
    phase[2] = 'b';
    cout << phase << endl;
    //find the position of the substring
    cout << phase.find("ffe",0) << endl;
    string phase2 = phase.substr(1,5);
    //starts from pos and find n letters in the string
    cout << phase.substr(1,3) << endl;
    cout << phase2 << endl;

}

