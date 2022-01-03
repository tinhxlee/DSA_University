// Cấu trúc tự trỏ
#include<iostream>
#define endl "\n"
using namespace std ;

struct person{
	string ten;
	int tuoi ;
	person *bo, *me ; // con trỏ kiểu bất kì, cấp phát 8 byte
	person(string t, int d, person *b = 0, person *m = 0){
		ten =  t; tuoi = d ;
		bo =  b ;
		me = m ;
	}
};
int main(){
	// string x = "hoabinhthongnhat"; // string quản lý con trỏ
	// cout << sizeof(person) << endl; // -> vô cùng nếu ko dùng con trỏ
	// cout << sizeof(int *) << endl; //-> 8byte
	// cout << sizeof(int ) << endl;; //-> 4byte
	// cout << sizeof(string) << endl ;


	person A("Chi pheo",15), B("Thi no",19), C("chuoi",2, &A,&B) ;
	cout << C.ten << endl << C.tuoi << endl  << "Ten bo : " << C.bo->ten << endl << "Ten me : " << C.me->ten << endl ;
	person *D = new person("meo",100,&C) ;
	person E("chuot",12,0,D);
	cout << "Cu ngoai cua E : " << E.me->bo->bo->ten;
}