#include<iostream>
using namespace std ;
class A{
    private:
        int elem ;
    public:
        A(int x = 0){elem = x ;} // Ham tao co doi
        A &operator=(A &b){this->elem = b.elem ; return *this ;} // Nap chong toan tu gan
        A(A &b){this->elem = b.elem ;} // toan tu coppy, toan tu nay dc sd khi : A d = a ;
        int getE(){return elem ;} // Lay gia tri element tu private
};
int main(){
    A a, b(3), c(5) ;
    cout << a.getE() << " " << b.getE() << " " << c.getE() << endl ;
    a = b = c ;
    cout << a.getE() << " " << b.getE() << " " << c.getE() << endl ;
    A d = a ;

}