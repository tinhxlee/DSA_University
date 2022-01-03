#include<bits/stdc++.h>
void input(float *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        std :: cout << "A[" << i << "] = ";
        std :: cin >> a[i] ;
    }
}
void output(float *a, int n)
{
    std :: cout << "Mang cua ban la : ";
    for (int  i = 0; i < n; i++)
    {
        std :: cout << a[i] << " ";
    }   
}
float Min(float * a, int n)
{
    if(n == 2) return std :: min(a[0],a[1]) ;
    return std :: min(a[n-1],Min(a,n-1)) ; // Ví dụ như có 5 phần tử thì nó sẽ so sánh giữa a[3] và a[4]
    
}
int main()
{
    int n ;
    float *a = new float[n];
    std :: cout << "Nhap n = ";
    std :: cin >> n ;
    input(a,n);
    output(a,n);
    std :: cout << "\nGia tri nho nhat cua mang la : " << Min(a,n);
}