#include<bits/stdc++.h>
int UCLN(int a, int b)
{
    if(a == b) return a;
    if(a>b) a-=b;
    else b-= a ;
    return UCLN(a,b);
}
int main()
{
    int a, b ;
    std :: cout << "Nhap a = ";
    std :: cin >> a ;
    std :: cout << "Nhap b = ";
    std :: cin >> b ;
    std :: cout << UCLN(a,b);
}