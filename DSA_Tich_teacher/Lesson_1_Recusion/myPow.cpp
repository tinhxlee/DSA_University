#include<iostream>
double mypow(double &x, int n)
{
    if(n==0) return 1 ;
    else return x*mypow(x,n-1);
}
int main()
{
    double a ;
    int n ;
    std :: cout << "Nhap so hang  : ";
    std :: cin >> a ;
    std :: cout << "Nhap so mu : ";
    std :: cin >> n ;
    std :: cout << a << "^" << n << " = " << mypow(a,n) << std :: endl;
    system("pause");
}