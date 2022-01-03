// doi co so 10 sang 16
#include<iostream>
#include"STACK.cpp"
using namespace std;
int main(){
	int n ;
	cout << "Nhap n = ";
	cin >> n ;
	//printf("%X\n",n); // doi co so 10 sang 16 bang he thong C
	char hex[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	Stack<char> S ;
	while(n){
	    S.push(hex[n%16]);
		n/=16 ;
	}
	while(S.size()) {
		cout << S.top() ;
		S.pop();
	}

}

