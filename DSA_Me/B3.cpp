#include<iostream>
using namespace std ;
class Sinhvien
{
private:
     string id, name , sex;
     int point_math , point_physic, point_chemiscal , n , birthyear  ;
public:
   void Import()
   {
       cout << "Nhap so luong sinh vien :  ";
       cin >> n ;
       for (int  i = 0; i < n; i++)
       {
        cin.ignore();
        cout << "Sinh vien " << i + 1 << " : " << endl;
        cout << "Nhap so bao danh : " ;
        getline(cin,id) ;
        cout << "Nhap ten : " ;
        getline(cin,name) ;
        cout << "Nhap gioi tinh : " ;
        getline(cin,sex) ;
        cout << "Nhap nam sinh :  ";
        cin >> birthyear ;
        cout << "Nhap diem Toan : ";
        cin >> point_math ;
        cout << "Nhap diem Ly : ";
        cin >> point_physic ;
        cout << "Nhap diem Hoa : ";
        cin >> point_chemiscal ;
       }
    }
   void Output()
   {
       for (int  i = 0; i < n; i++)
       {
        cout << "Sinh vien " << i + 1 << " : " << endl ;
        cout << "So bao danh : " << id << endl ;
        cout << "Nhap ten : " << name << endl ;
        cout << "Nhap gioi tinh : " << sex << endl ;
        cout << "Nam sinh : " << birthyear << endl ;
        cout << "Nhap diem Toan : " << point_math << endl ;
        cout << "Nhap diem Ly : " << point_physic << endl ;
        cout << "Nhap diem Hoa : " << point_chemiscal << endl ;
        cout << "Tong diem 3 mon : " << point_chemiscal + point_math + point_physic << endl ;
        cout << endl << endl  ;
       }
    }
};
int main()
{
    Sinhvien a ;
    a.Import();
    cout << "Danh sach Sinh vien cua ban : " <<  endl ;
    a.Output();
}


