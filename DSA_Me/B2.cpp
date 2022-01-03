#include<iostream>
#include<math.h>
using namespace std ;
class Line
{
private:
    int x1 ;
    int y1 ;
    int x2 ;
    int y2 ;
    int n ;
public:
    void nhap()
    {
    cout << "Nhap so duong thang : " ;
    cin >> n ;
    for (int i = 0; i < n; i++)
      {
        cout << "Nhap toa do duong thang " << i + 1 << " : " << endl ;
        cout << "Nhap x1 = ";
        cin >> x1 ;
        cout << "Nhap y1 = ";
        cin >> y1 ;
        cout << "\nNhap x2 = ";
        cin >> x2 ;
        cout << "Nhap y2 = ";
        cin >> y2 ;
        cout << endl ;
      }
    }
    void xuat()
    {
        for (int  i = 0; i < n; i++)
        {
        cout << "2 dau doan thang "<< i + 1 << " co toa do : A"<< i + 1 << "(" << x1 << "," << y1 << ") ; B" << i + 1 << "(" << x2 << "," << y2 << ")" << endl ; 
        cout << "Do dai doan thang A" << i + 1 << "B" << i + 1 << " = " << sqrt(pow(x2-x1,2)+pow(y2-y1,2)) ;
        }
    }
};
int main()
{
    Line a ;
    a.nhap();
    a.xuat();
}


