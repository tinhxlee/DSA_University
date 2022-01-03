#include<bits/stdc++.h>
using namespace std ;
int main(){
	stack<int> S ; // luu vi tri
	int n ;
	cin >> n  ;
	int a[n + 5] = {INT_MAX} ;
	for(int i = 1 ; i <= n ; i ++){
		cin >> a[i];		
	}
	S.push(0);
	for(int i = 1 ; i <= n ; i ++){
		while(a[S.top()] <= a[i]){
			S.pop();
		}
		cout << i - S.top() << " ";
		S.push(i);
	}
	// Do phuc tap On
}
