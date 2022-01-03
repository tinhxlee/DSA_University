#include<bits/stdc++.h>
#include"vector.cpp"
using namespace std ;
int main(){
	Vector<int> V(10,1) ;
	cout << "Vector : ";for(int x:V) cout << x << " ";
	int k = 0 ;
//	for(int &x:V) x = ++ k ;
	cout << "\nVector : "; for(Vector<int>::iterator it = V.begin();it != V.end() ; it ++) cout << *it << " ";
	V.resize(17,3);
	for(int &x:V) x = ++ k ;
	cout << "\nVector : "; for(int x:V) cout << x << " ";
	auto it  = V.begin();
	it = it + 5 ;
	V.insert(it,69);
	cout << "\nVector : "; for(int x:V) cout << x << " ";
	it  = it + 5 ;
	*it = 0 ;
	cout << "\nVector : "; for(int x:V) cout << x << " ";
	V.erase(it);
	cout << "\nVector : "; for(int x:V) cout << x << " ";
	Vector<int> Z = V ;
	cout << "\nVector dao : ";
	for(Vector<int>::reverse_iterator rit = Z.rbegin(); rit != Z.rend(); rit ++) cout << *rit << " ";
}
