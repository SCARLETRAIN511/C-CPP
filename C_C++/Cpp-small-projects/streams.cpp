#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char** argv) {
    ofstream ofs("C:\\Users\\msipc\\Desktop\\code\\C-CPP\\C_C++\\Cpp-small-projects\\My.txt",ios::trunc);
    ofs <<"John"<<endl;
    ofs<<25<<endl;
    ofs<<"cs"<<endl;
    ofs.close();

    return 0;
}