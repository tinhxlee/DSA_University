#include<bits/stdc++.h>
#include"vector.cpp"
using namespace std ;
int main(){
	Vector<int> V(10,1); // khai bao vector v co 10 so 1
	V[3] = 7 ;
	V[9] = 123 ;
	for(int i = 0 ; i < V.size(); i ++){
		cout << V[i] << " ";
	}
	cout << endl ;
	V.pop_back(); // xoa phan tu cuoi cung
	Vector<int>::iterator it ; // khai bao bien it kieu iterator(kieu bo lap vector) dang 1 con tro bo lap xuoi
	for(it = V.begin(); it != V.end(); it ++){
		cout << *it << " ";
	}
	V.back()= 9 ;
	cout << endl ;
	V.push_back(0);
	for(auto x:V){
		cout << x << " ";
	}
//	V.resize(5);
	cout << endl ;
	for(auto x:V){
		cout << x << " ";
	}
	cout << endl ;
//	V.resize(15,96);
	for(auto x:V){
		cout << x << " ";
	}
	cout << endl << "Dao day : " ;
	for(Vector<int>::reverse_iterator rit = V.rbegin(); rit != V.rend(); rit ++){
		cout << *rit << " ";
	}
	cout << endl << "Dung luong chua : " << V.capacity();
	cout << "\nV[3] = " << V[3];
	it  = V.begin(); it ++ ;
	V.insert(it,69);
	cout << "\n";
	for(auto x:V){
		cout << x << " ";
	}
	it ++ ;
	V.erase(it);
	cout << "\n";
	for(auto x:V){
		cout << x << " ";
	}
	Vector<int> Z ;
	Z = V ;
	cout << "\nvector Z : " ; for(int x:Z) cout << x << " ";
}
