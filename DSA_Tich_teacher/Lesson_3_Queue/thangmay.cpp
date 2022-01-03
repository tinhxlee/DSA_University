#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n , k , m , s , f ; // n : So tang, k : so tang len, m : so tang xuong, s : tang hien tai
	// f: tang muon len
	cout << "Nhap so tang cua toa nha : ";
	cin >> n ;
	cout << "Nhap so tang co the len : ";
	cin >> k ;
	cout << "Nhap so tang co the xuong : ";
	cin >> m ;
	cout << "Nhap so tang hien tai : ";
	cin >> s ;
	cout << "Nhap so tang muon len : ";
	cin >> f ;
	map<int,int> M ; // first : so tang ; second : so lan bam nut thang may
	queue<int> Q ;
	Q.push(s); // push tang xuat phat vao queue
	M[s] = 0 ; // xuat phat bang 0 buoc 
	while(Q.size()){
		int u = Q.front();
		Q.pop();
		if(u + k <=n && M.find(u + k) == M.end()){
			Q.push(u+k);
			M[u + k] = M[u] + 1 ;			
		}
		if(u - m > 0 && M.find(u - m) == M.end()){
			Q.push(u-m);
			M[u - m] = M[u] + 1 ;
		}
		if(M.find(f) != M.end()) break ;
	}
	if(M.find(f) != M.end()){
		cout << M[f];
	}
	else{
		cout << -1 ;
	}
}
