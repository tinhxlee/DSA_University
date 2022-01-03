#include<iostream>
long long gt( int n )
{
    return n ? n * gt( n - 1 ) : 1 ;
}
int main()
{
    int n ;
    std :: cout << "Nhap so giai thua : ";
    std :: cin >> n ;
    std :: cout << n << "! = " << gt(n) << std :: endl;
    system("pause"); 
}