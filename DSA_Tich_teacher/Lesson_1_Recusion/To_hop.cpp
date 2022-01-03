#include<iostream>
long long C(const int &k, const int &n)
{
    if( k <= 0 or k >= n) return 1 ;
    return C(k - 1, n - 1) + C(k, n - 1);
}
int main()
{
    int n ;
    std :: cout << "Nhap n = ";
    std :: cin >> n ;
    std :: cout << "Tam giac pascal : \n";
    for (int  i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i ; j++) std :: cout << C(j,i) << " ";
        std :: cout << std :: endl;        
    }   
}