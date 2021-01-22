#include <iostream>
using namespace std;
#ifndef PI

#define PI 3.1425 //symbolic constants
#define SRR(x)(x*x)
#define max(x,y)(x>y?x:y)
#define msg(x) #x;
#endif // 



int main(){
    cout <<PI<<endl;
    cout << SRR(5)<<endl;
    cout << max(12,5)<<endl;
}