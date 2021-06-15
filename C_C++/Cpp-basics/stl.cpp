#include <iostream>
using namespace std;
#include <vector>
#include <list>

int main(){
    vector<int> vec = {10,20,30,40};
    vec.push_back(25);
    vec.push_back(30);
    vec.pop_back();

    list<int> list1= {1,2,3,4,5};

    for (int x:vec){
        cout << x <<" ";
    }
    vector<int>::iterator itr = vec.begin();
    for (itr = vec.begin();itr!=vec.end();itr++){
        cout << *itr <<" ";
    }
    cout <<endl;

    list<int>::iterator itrList = list1.begin();
    for (itrList = list1.begin();itrList != list1.end();itrList ++){
        cout << *itrList<<endl;
    }

}