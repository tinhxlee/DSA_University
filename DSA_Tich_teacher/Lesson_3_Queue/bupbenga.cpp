#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n, k ; // n phan tu , k la do chenh nhau
	long long res = 0 ;
	cin >> n >> k ;
	int a[n];
	for(int &x:a){
		cin >> x ;	
	}
	sort(a,a+n,greater<int>());
	queue<int> Q ;
	for(int x:a){
		Q.push(x);
		if(Q.front() >= x + k){
			Q.pop();
		}
		else{
			res += x ;
		}
	}
	cout << Q.size() << " " << res ;
	
}
