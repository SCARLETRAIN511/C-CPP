#include<iostream>
using namespace std;
int main(){
	int h;
	cin>>h;
	int r;
	cin>>r;
	float n;
	n=20000/(r^2*3.1415*h);
	int new_n=0;
	new_n=int(n)+1;
	cout<<new_n<<endl;
	return 0;
} 
