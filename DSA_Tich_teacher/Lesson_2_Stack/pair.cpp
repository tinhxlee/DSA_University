#include<bits/stdc++.h>
using namespace std ;
typedef pair<double,double> diem ; // Khai bao diem
typedef pair<string, pair<int,double>> sv ;
#define ten first
#define tuoi second.first
#define diem second.second
int main(){
	sv a,v = {"Thi no", {20,169}} ;
	a.ten = "Chi pheo";
	a.tuoi = 19 ;
	a.diem = 100 ;
	cout << a.ten << " " << a.tuoi << " " << a.diem << endl ;
	cout << v.ten << " " << v.tuoi << " " << v.diem << endl ;
}
