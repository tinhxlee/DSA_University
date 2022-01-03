#include<iostream>
#define cout std :: cout
#define cin std :: cin 
#define ll long long 
int main()
{
	int x , n ;
	ll res = 1;
	cout << "Nhap so hang x = ";
	cin >> x ;
	cout << "Nhap so mu n = ";
	cin >> n ;

	while(n)
	{
		if(n%2) res *= x ;
		x*=x ;
		n/=2 ;
	}
	cout << res ;
}
// O(logn)
