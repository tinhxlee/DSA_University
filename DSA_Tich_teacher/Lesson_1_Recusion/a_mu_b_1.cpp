// Tính hàm a^b mod 1000 bằng đệ quy
#include<iostream>
#define cout std :: cout
#define cin std :: cin 
#define endl std :: endl
#define ll long long
ll M = 1e3 ;
long long fun(const ll &x , const ll &n)
{
    if(n == 0) return 1 ;
    if(n%2) return x*fun(x*x%M,n/2)%M;
    return fun(x*x%M,n/2);
}
int main()
{
    ll x, n;
    cin >> x >> n;
    x%=M ;
    ll res = fun(x,n);
    if(res<100) cout << "0";
    if(res< 10) cout << "0";
    cout << res;
}