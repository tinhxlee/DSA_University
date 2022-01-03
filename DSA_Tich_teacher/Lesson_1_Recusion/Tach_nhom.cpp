#include<iostream>
int tach(int n)
{
    if( n <= 4 or n % 2 ) return 1 ; 
    else return tach( n / 2 + 2 ) + tach( n / 2 - 2 );
}
int Tongtach( int n )
{
    if( n <= 4 or n % 2 ) return n ; 
    else return Tongtach( n / 2 + 2 ) + Tongtach( n / 2 - 2 ) + n;
}
int main()
{
    int n ;
    std :: cout << "Nhap so can tach : ";
    std :: cin >> n ; 
    std :: cout << "So nhom cua " << n << " la : " << tach( n ) << "\n";
    std :: cout << "Tong cac phan tu trong nhom la : " << Tongtach( n ) << "\n";
    system("pause");
}