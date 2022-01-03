#include<bits/stdc++.h>
using namespace std ;
typedef pair<double, double> diem ; // Khai báo một diem 
typedef pair< string, pair<int,int> > SV ; // Khai báo kieu sinh vien gồm tên, tuoi, diem
#define ten first
#define tuoi second.first
#define diem second.second

int main()
{
	SV s;
	s.ten = "tinh" ; s.tuoi = 15 ;
	s.diem = 10 ;
	cout << s.ten << "\t" << s.tuoi << "\t" << s.diem << "\n";
	
}
