// Đệ quy trên dãy a1,.... an
#include<iostream>
// Đệ quy nhập
void nhap(int *a , const int &n)
{
    if( n == 0 ) return ;
    else
    {
        nhap( a , n - 1 );
        std :: cout << "Nhap A[" << n << "] = " ; 
        std :: cin >> a[ n ];
    }
}
// Đệ quy xuất
void xuat( int *a , const int &n)
{
    if( n ) 
    {
        xuat( a , n - 1 );
        std :: cout << a[n] << " ";
    }
}
// Đệ quy tính tổng các phần tử trong dãy
int Tong( int *a , const int &n)
{
    return n == 0 ? 0 : Tong( a, n - 1 ) + a[ n ];
}
// Đệ quy tìm số lớn nhất trong dãy
int Max(int *a , const int &n)
{
    return n == 0 ? INT_MIN : std :: max(Max(a , n - 1), a[n] );
}
// Đệ quy tìm số lớn nhất trong 1 đoạn
int MAX(int *a, const int &L, const int &R)
{
    if( L == R ) return a[L];
    int M = (L + R)/2 ;
    return std :: max(MAX(a, L  , M), MAX(a, M + 1, R));
}
// Đệ quy sắp xếp tăng dần các phần tử trong dãy (Sắp xếp chèn)
void sapxep(int *a, const int &n)
{
    if( n <= 1 ) return ;
    sapxep(a, n - 1);
    for(int i = n ; i > 1 && a[ i - 1 ] > a[ i ] ; i --) std :: swap(a[i - 1], a[i]);
}
int main()
{
    int n ;
    std :: cout << "Nhap n = ";
    std :: cin >> n ;
    int *a = new int [n];
    nhap( a, n );
    std :: cout << "Day so cua ban la : " ; xuat( a , n );
    std :: cout << "\nTong cua cac phan tu trong day la : " << Tong( a, n ) << "\n";
    std :: cout << "Gia tri lon nhat cua day so la : " << Max(a, n) << "\n";
    int l,r ;
    std :: cout << "Nhap gia tri dau trai : ";
    std :: cin >> l ;
    std :: cout << "Nhap gia tri dau phai : ";
    std :: cin >> r ;
    std :: cout << "Gia tri lon nhat trong  doan tu " << l << " den " << r << " la : " << MAX(a, l, r) << "\n";
    sapxep(a, n);
    std :: cout << "Day da sap xep cua ban la : "; xuat(a, n);
}