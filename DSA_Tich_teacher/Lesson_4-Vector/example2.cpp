#include<bits/stdc++.h>
using namespace std ;
void xuat(string x){
	cout << x << " ";
}
int main(){
	string a[] = {"hanoi","ha tay","ha bac","ha dong","ha nam","hoa binh"};
	vector<string> V(a + 2, a + 5);
	cout << "\nVector: " ; for(auto x:V) cout << x << " ";
	V.resize(8,"ha");
	cout << "\nVector: " ; for(auto x:V) cout << x << " ";
	vector<string> Z(V.begin(),V.end()); // Z = V ;
	cout << "\nVector: " ; for(auto it = V.begin(); it != V.end(); it ++) cout << *it << " ";
	cout << "\n";
	for_each(Z.begin(),Z.end(),xuat);
}
