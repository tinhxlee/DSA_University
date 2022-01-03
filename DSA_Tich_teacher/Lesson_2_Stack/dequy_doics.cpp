#include<iostream>
using namespace std;
void dcs(int n){
	if(n<2) cout << n ;
	else{
		dcs(n/2);
		cout << n%2 ;
	}
}
int main()
{
	dcs(123);
}

