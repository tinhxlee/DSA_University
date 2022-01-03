#include<bits/stdc++.h>
#include"vector.cpp"
using namespace std ;
int main(){
	Vector<int> V(5,7) ;
	cout << "\nVector: " ;for(int i = 0 ; i < V.size(); i ++) cout << V[i] << " ";
	V.push_back(8);
	cout << "\nVector: " ;for(int i = 0 ; i < V.size(); i ++) cout << V[i] << " ";
	V.pop_back();
	cout << "\nVector: " ;for(int i = 0 ; i < V.size(); i ++) cout << V[i] << " ";
	V[3] = 69 ;
	V.front() = 12 ;
	V.back() = 46 ;
	cout << "\nVector: " ;for(int i = 0 ; i < V.size(); i ++) cout << V[i] << " ";
	V.push_back(3) ;
	cout << "\nVector: " ;
	for(Vector<int> :: iterator it = V.begin() ; it != V.end() ;  it ++) cout << *it << " ";
	cout << "\nVector: " ;for(auto v:V) cout << v << " ";
	cout << "\nVector dao: " ;
	for(Vector<int> :: iterator it = V.end() - 1 ; it != V.begin() - 1 ;  it --) cout << *it << " ";
	cout << "\nVector dao: " ;
	for(Vector<int> :: reverse_iterator rit = V.rbegin() ; rit != V.rend() ;  rit ++) cout << *rit << " ";
	Vector<int> Z = V ;
	cout << "\nVector Z: " ; for(auto x:Z) cout << x << " ";
	Vector<int>::iterator it  ;
	it ++ ;
	V.insert(it,96);
	cout << "\nVector V: " ; for(auto x:V) cout << x << " ";
}
