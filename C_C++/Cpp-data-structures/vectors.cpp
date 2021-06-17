#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char** argv) {
    vector<int> *vp = new vector<int>();
    vector<int> v;

    //pushback will always check the size of the array
    //v.push_back(10);
    //v.push_back(20);
    //v.push_back(30);
    //v[1] = 100;
    //cout << v[0]<<endl;
    //cout << v[1]<<endl;
    //cout << v[2]<<endl;
    //v[3] = 10;
    //cout <<v[3]<<endl;
    for (int i =0;i<10;i++){
        v.push_back(i+1);
        //the size will give how many elements are in the vector
        cout << v.size() <<"  ";
    }
    cout <<endl;
    //this will output he current capacity in the vector
    cout << v.capacity()<<endl;
    for (int i = 0;i<10;i++){
        cout << v[i]<<endl;
    }

    //initialize the vector
    vector<int> v2(10,-2);
    for (int i = 0;i<v2.size();i++){
        cout << v2[i]<<endl;
    }

    //initialize by length
    vector<int> v3(20);
    cout << v3.size()<<endl;
}