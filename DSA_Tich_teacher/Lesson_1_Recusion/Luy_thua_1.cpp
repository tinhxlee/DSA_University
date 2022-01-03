#include<iostream>
using namespace std ;
// 2^100 -> 4^50 -> 16^25 -> 16*(256^12)
long long POW( const int &x,  const int &n)
{
    if(n == 0) return 1 ;
    else return n%2 ? x*POW(x*x, n/2) : POW(x*x,n/2);
}
long long luythua(const int &x, const int &n)
{
    if(n == 0) return 1;
    long long t = luythua(x,n/2);
    return n%2?x*t*t:t*t;
}
int main()
{
    cout << POW(2,10) << endl;
    cout << luythua(2,10);
}
