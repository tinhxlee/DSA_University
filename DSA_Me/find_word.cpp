#include<bits/stdc++.h>
bool Find(std :: string a, char x , int i)
{
    if(i = a.size()) return 0 ;
    if(a[i] == x) return 1 ;
    return Find(a,x,i+1);
}

int main()
{
    int i = 0 ;
    std :: string a;
    char x;
    std :: cout << "Nhap chuoi ky tu cua ban : ";
    std :: getline(std ::cin,a);
    std :: cout << "Nhap ky tu can tim : ";
    std :: cin >> x ;
    if(Find(a,x,i) == 0) std :: cout << "Khong ton tai " << x  << "trong chuoi :  " << a ;
    else std :: cout << "Ton tai " << x << " trong chuoi : " << a ;
}