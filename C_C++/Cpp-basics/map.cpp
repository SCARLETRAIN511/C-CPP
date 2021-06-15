#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int,string> m;
    m.insert(pair<int,string>(1,"John"));
    m.insert(pair<int,string>(2,"Ravi"));
    m.insert(pair<int,string>(3,"Tony"));
    cout<<"using auto to define"<<endl;
    for (auto itr = m.begin();itr != m.end();itr ++){
        cout << itr->first<<" "<<itr->second<<endl;
    }
    auto itr1 = m.find(2);
    cout << "Found value is "<<endl;
    cout <<itr1->first<<itr1->second<<endl;
}