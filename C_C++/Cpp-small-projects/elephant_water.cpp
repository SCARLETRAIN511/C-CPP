#include<iostream>
using namespace std;
int main2(){
	int h, r, count;
	cin >> h;
	cin >> r;
	int square = 3.14159*r*r*h;
	count = 20000 / square + 1;
	cout << count <<endl;
	system("pause");
	return 0;
}
