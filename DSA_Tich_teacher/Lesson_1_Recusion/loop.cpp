#include<iostream>
#define cin std :: cin 
#define cout std :: cout
#define ll long long 
int main()
{
	ll x,n,res = 1, M = 1e3 ;
	cin >> x >> n ;
    x%= M;
	while(n)
	{
		if(n%2) res = res * x %M ;
		x = x*x%M ;
		n/=2 ;
	}
	if(res < 100) cout << "0";
    if(res < 10) cout << "0";
    cout << res ;
}
// O(logn)
