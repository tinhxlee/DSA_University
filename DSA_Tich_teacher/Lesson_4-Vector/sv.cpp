#include<iostream>
#include<vector>
#include<iomanip>
#include<fstream>
using namespace std ;
class sv{
	private:
		string ten ;
		int tuoi ;
		double diem ;
	public:
		int getAge();
		int getPoint();
		friend istream &operator>>(istream &is, sv &s);
		friend ostream &operator<<(ostream &os, sv &s);
};
istream &operator>>(istream &is, sv &s){
	// cout << "Nhap ten : ";
	is.ignore(1);
	getline(is, s.ten);
	// cout << "Nhap tuoi : ";
	is >> s.tuoi ;
	// cout << "Nhap diem : ";
	is >> s.diem ;
	return is ;
}
ostream &operator<<(ostream &os, sv &s){
	os << left << setw(25) <<  s.ten << setw(10) << s.tuoi << setw(10) << s.diem ;
	return os ;
}
int sv::getAge(){
	return tuoi ;
}
int sv::getPoint(){
	return diem ;
}
class lophoc{
	private:
		vector<sv> C ;
		double dtb(int k){
			double t = 0 , d = 0 ;
			for(auto c : C) if(c.getAge() == k){
				d ++ ;
				t += c.getPoint();
			}
			if(d == 0) d = 1;
			return t/d ;
		}
	public:
		friend istream &operator>>(istream &is, lophoc &S);
		friend ostream &operator<<(ostream &os, lophoc &S);
		void dtbAge();
		void sxDiemtang();
		void sxTuoigiam();

};
istream &operator>>(istream &is, lophoc &S){
	int n ;
	// cout << "Nhap so luong sinh vien : ";
	is >> n ;
	S.C.resize(n);
	for( auto &c : S.C) is >> c ;
	return is ;
} 
ostream &operator<<(ostream &os, lophoc &S){
	for(auto c : S.C) os << c << "\n" ;
	return os ;
}
void lophoc::dtbAge(){
	for(int i = 0 ; i < 150 ; i ++){
		double t = dtb(i);
		if(t) cout << "\nDiem trung binh tuoi " << i << " la : " << t << "\n";
	}
}
void lophoc::sxDiemtang(){
	for(int i = 0 ; i < C.size() - 1 ;i ++){
		for(int j = i + 1 ; j < C.size() ; j ++){
			if(C[i].getPoint() > C[j].getPoint()) swap(C[i],C[j]) ;
		}
	}
}
void lophoc::sxTuoigiam(){
	for(int i = 0 ; i < C.size() - 1 ; i ++){
		for(int j = i + 1 ; j < C.size() ; j ++){
			if(C[i].getAge() < C[j].getAge()) swap(C[i],C[j]);
		}
	}
}
int menu()
{
	system("cls");
	cout<<"Chon chuc nang";
	int chon;
	cout<<"\n1. Nhap lop hoc ";
	cout<<"\n2. Xuat";
	cout<<"\n3. Diem trung binh theo tuoi : ";
	cout<<"\n4. sap xep diem tang dan : ";
	cout<<"\n5. sap xep tuoi giam dan : ";
	cout<<"\n6. Thoat";
	cout<<"\nBan chon : "; cin>>chon;
	if(chon>=1 && chon<=6) return chon;
	return menu();
}
int main(){
	lophoc L;
	bool ok=0;
	ifstream fin;
	do
	{
		int mon=menu();
		switch(mon)
		{
			case 1: 
					fin.open("sv.txt",ios::in);
					fin>>L;
					fin.close();
					ok=1;
					break;
			case 2: if(ok) cout<<"Danh sach \n"<<L; else cout<<"chua nhap dl"; break;
			case 3: L.dtbAge(); break;
			case 4: L.sxDiemtang();	cout<<"\ndanh sach sv sx diem tang dan: \n"<<L; break;
			case 5: L.sxTuoigiam();	cout<<"\ndanh sach sv sx tuoi giam dan: \n"<<L; break;
			case 6: return 0;
		}
		cout<<"\nDone\n";
		system("pause");
	}
 
	while(1);
}
