#include<iostream>
using namespace std;
int main(){
	double n;
	cin>>n;
	double x;
	cin>>x;
	double y;
	cin>>y;
	double re_main=0;
	re_main=n-y/x;
	int new_remain;
	new_remain=floor(re_main);
	if (re_main>=0)
		cout<<new_remain<<endl;
	else
		cout<<0<<endl;
	return 0;
	
}
