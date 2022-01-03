#include<iostream>
class Point
{
    private:
    float x ;
    float y ;
    public:
    Point();
    Point(float a, float b);
    void input();
    void output();   
};
Point ::Point(){}
Point :: Point(float a, float b)
{
    x = a ;
    y = b ;
}
void Point ::input()
{
    std :: cin >> x >> y ;
}
void Point :: output()
{
    std :: cout << "(" << x << " , " << y << ")" << std :: endl;
}
int main()
{
    Point a , b(3,4);
    std :: cout << "Nhap toa do diem A : ";
    a.input();
    std :: cout << "A = " ; a.output();
    std :: cout << "B = "; b.output();
    system("pause");
}