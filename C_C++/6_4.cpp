#include <iostream>
using namespace std;
int main(){
    int num[6];
    for (int i=0;i<6;i++){
        cin>>num[i];
    }
    int minEven=100;
    int maxOdd=0;
    for (int i=0;i<6;i++){
        if (num[i]%2==0 && num[i]<minEven){
            minEven=num[i];
        }
        if (num[i]%2==1 && num[i]>maxOdd){
            maxOdd=num[i];
        }

    }
    int d;
    d=maxOdd-minEven;
    cout << d <<endl;
    system("pause");
    return 0;
    
}