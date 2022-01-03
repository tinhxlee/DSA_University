#include<iostream>
#define cin std :: cin 
long long M = 1e3 ;
long long fun(const int &x, const int &n)
{
    if(n == 0) return 1 ;
    if(n % 2) return x*fun(x*x%M,n/2)%M;
    else return fun(x*x%M,n/2);
}
int main()
{
    int x, n ;
    cin >> x >> n ;
    x%=M ;
    printf("%0.3lld",fun(x,n));
}