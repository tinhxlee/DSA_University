#include<iostream>
#include<math.h>
void input_step(float *a , int n )
{
    for (int  i = 0; i <= n; i++)
    {
        std :: cout << "A[" << i << "] = ";
        std :: cin >> a[i];
    }
}
void output_fx(float *a ,  int n)
{
    std :: cout << "Ham cua ban la : F(X) = ";

    for (int  i = n; i >= 0; i--)
    {
        if(i == n) std :: cout << a[n] <<  "x^" << n << " + " ; 
        else if(i > 1 && i < n) std :: cout << a[i] <<  "x^" << i << " + ";
        else if(i == 1) std :: cout << "x + ";
        else std:: cout << a[0];
    } 
}
int print_value( float *a,  int n ,  float x )
{
    if(n == 0) return a[0] ;
    else return a[n] * pow(x,n) + print_value(a,n - 1,x) ;
}
int main()
{
    int n ;
    float x ;
    float *a = new float [n] ;
    std :: cout << "Nhap bac toi da : ";
    std :: cin >> n ;
    input_step(a,n);
    if(n==0) {
        std :: cout << "F(x) = " << a[0];
        return 0 ;
    } 
    output_fx(a,n);
    std :: cout << "\nNhap gia tri x = ";
    std :: cin >> x ;
    std :: cout << "Gia tri cua F(" << x << ") = " << print_value(a,n,x);
}