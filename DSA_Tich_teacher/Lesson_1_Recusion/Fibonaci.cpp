#include<iostream>
long long F( int n )
{
    if( n == 0 or n == 1) return 1ll ;
    else return F( n - 1 ) + F( n - 2 );
}
int main()
{
    int n ;
    std :: cout << "Nhap so luong Fibonaci : ";
    std :: cin >> n ;
    for (int i = 1 ; i <= n; i++) std :: cout << "So thu " << i << " : " << F(i) << std :: endl;
    system("pause");
}
