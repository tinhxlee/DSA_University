#include<iostream>
#include<math.h>
class TD
{
    private:
    float xa, ya , xb, yb , xc, yc ;
    int n ;
    public:
    TD()
    {
        std :: cout << "\nDay la ham tao khong doi  !!!\n";
    }
    TD(float xA, float yA)
    {
        xa = xA ;
        ya =  yA ;
        std :: cout << "Day la ham tao co doi va khoi tao diem A !!!!\n" ;
    }
    TD(float xA, float yA , float xB, float yB , float xC, float yC )
    {
        xa = xA ; xb = xB ; xc = xC ;
        ya = yA ; yb = yB ; yc = yC ;
        std :: cout << "Day la ham tao co doi day du !!!!!\n";
    }
    ~TD()
    {
        std :: cout << "Day la ham huy !!!\n";
    }
    void input();
    void output();
    float kc(float &x1, float &y1,float &x2, float &y2);
    float chuvi();
    float dientich();
};
void TD ::input()
{
    std :: cout << "Nhap toa do diem A :\nNhap toa do x :";
    std :: cin >> xa ;
    std :: cout << "Nhap toa do y : ";
    std :: cin >> ya ;
    std :: cout << "Nhap toa do diem B :\nNhap toa do x :";
    std :: cin >> xb ;
    std :: cout << "Nhap toa do y : ";
    std :: cin >> yb ;
    std :: cout << "Nhap toa do diem C :\nNhap toa do x :";
    std :: cin >> xc ;
    std :: cout << "Nhap toa do y : ";
    std :: cin >> yc ;
}
void TD ::output()
{
    std :: cout << "Toa do diem A = (" << xa << " , " << ya << ")\n";
    std :: cout << "Toa do diem B = (" << xb << " , " << yb << ")\n";
    std :: cout << "Toa do diem C = (" << xc << " , " << yc << ")\n";
}
float TD :: kc(float &x1, float &y1, float &x2, float &y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2 ,2));
}
float TD ::chuvi()
{
    return kc(xa,ya,xb,yb) + kc(xb,yb,xc,yc) + kc(xc,yc,xa,ya);
}
float TD ::dientich()
{
    return sqrt(chuvi() * (chuvi() - kc(xa,ya,xb,yb)) * (chuvi() - kc(xb,yb,xc,yc)) * (chuvi() - kc(xc,yc,xa,ya))) ;
}
int main()
{
    TD *b ;
    b = new TD();
    TD a(3,9) , c(3,9,2,1,0,8);
    a.input();
    a.output();
    std :: cout << "Chu vi cua tam giac la : P = " << a.chuvi() << std :: endl;
    std :: cout << "Dien tich cua tam giac la : S = " << a.dientich() << std :: endl;
    delete b ;
    system("pause");
}
