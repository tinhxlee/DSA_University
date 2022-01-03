#include<iostream>
using namespace std ;
class Time
{
private:
  int hour ;
  int minute ;
  int second ;
public:
  void nhap()
  {
      cout << "Nhap gio : ";
      cin >> hour ;
      cout << "Nhap phut : ";
      cin >> minute ;
      cout << "Nhap giay : ";
      cin >> second ;
  }
  void xuat()
  {
      cout << "Thoi gian cua ban la : " << hour << " gio " << minute << " phut " << second << " giay ";
  }
};
int main()
{ 
    Time a ;
    a.nhap();
    a.xuat();
}


