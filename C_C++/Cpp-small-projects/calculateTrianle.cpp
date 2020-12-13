#include <iostream>
using namespace std;

void calculateNNumbers(){
    int n;
    cout << "Type the number" << endl;
    cin >> n;
    int sumNum = 0;
    for (int i = 1;i<=n;i++){
        sumNum = sumNum + i;
    }

    cout << "The sum is:" << sumNum << endl;
}

int main(){
    int b;
    int h;
    cout << "Type the height and the bottm of the triangle"<<endl;
    cin >> b >> h;

    int area = (b*h)/2;
    cout << "The area of the triangle is:"<<area << endl;
    calculateNNumbers();
    int x = 5, y;
    //左移运算符
    y = x << 3;
    cout << y;
    y = x >> 1;
    cout << y;
    return 0;
}