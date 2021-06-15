#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char** argv) {
    ofstream ofs("C:\\Users\\msipc\\Desktop\\code\\C-CPP\\C_C++\\Cpp-small-projects\\My.txt",ios::trunc);
    ofs <<"John"<<endl;
    ofs<<25<<endl;
    ofs<<"cs"<<endl;
    ofs.close();

    ifstream infile;
    infile.open("C:\\Users\\msipc\\Desktop\\code\\C-CPP\\C_C++\\Cpp-small-projects\\My.txt");
    if (!infile){
        cout <<"file can not open"<<endl;
    }
    string str;
    int x;
    infile >> str;
    infile >> x;
    cout <<str<<x<<endl;
    infile.close();
    return 0;
}