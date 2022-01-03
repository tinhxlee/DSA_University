#include<iostream>
using namespace std ;
class point
{
private:
    int x ;
    int y ;
    int n ;
public:
    void nhap()
    {
        cout << "Nhap so diem tren mat phang : " ;
        cin >> n ;
        for (int i = 0; i < n; i++)
        {
        cout << "nhap x" << i + 1 <<" = " ;
        cin >> x ;
        cout << "nhap y" << i + 1 <<" = " ;
        cin >> y ;
        cout << endl ;
        }
    }
    void xuat()
    {
        for (int  i = 0; i < n; i++)
        {
          cout << "A" << i + 1 << " = (" << x << ", "<< y << ")" <<  endl ;
        }
    }
};
int main()
{
    point a ;
    a.nhap();
    a.xuat();
    system("pause");
}


