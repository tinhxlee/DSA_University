#include<iostream>
#include<vector>
using namespace std ;
class sequence
{
private: 
      int length,n ;
      int *array = new int [length] ;
      

public:
void nhapPhanTu()
    {
    for (int i = 0; i < length; i++)
      {
        cout << "Nhap phan tu thu " << i + 1  << " : " ;
        cin >> array[i] ;
      }
    }
void xuat()
{
    for (int  i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    
}
void NhapDay()
{
    cout << "Nhap so luong day : ";
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
      cout << "Day thu " << i + 1 << " : " << "\nNhap so luong phan tu : ";
      cin >> length ;

      nhapPhanTu();
    }
    
}
void XuatDay()
{
    for (int  i = 0; i < n; i++)
    {
        cout << "Day thu " << i + 1 << " : " ;
        xuat();
    }
    
}

};


int main()
{
    sequence a ;
    
    a.NhapDay();
    a.XuatDay();

}